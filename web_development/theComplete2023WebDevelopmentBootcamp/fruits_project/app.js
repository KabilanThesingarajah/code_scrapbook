const { MongoClient, ServerApiVersion } = require("mongodb");

// localhost does not need a connection
const uri = "mongodb://localhost:27017";

// Create a MongoClient with a MongoClientOptions object to set the Stable API version
const client = new MongoClient(uri,  {
	serverApi: {
		version: ServerApiVersion.v1,
		strict: true,
		deprecationErrors: true,
	}
}
);

const myDB = client.db("fruitsDB");
const myColl = myDB.collection("fruits");

const docs = [
	{ name: "Apple", score: 8, review:"Great fruit" },
	{ name: "Orange", score: 6, review:"Kinda sour" },
	{ name: "Banana", score: 9, review:"Great stuff!" },
];


async function run() {
	try {
		// Connect the client to the server (optional starting in v4.7)
		await client.connect();

		// Send a ping to confirm a successful connection
		await client.db("admin").command({ ping: 1 });
		console.log("Pinged your deployment. You successfully connected to MongoDB!");

		const myDB = client.db("fruitsDB");
		const myColl = myDB.collection("fruits");

		// const insertManyresult = await myColl.insertMany(docs);
		// let ids = insertManyresult.insertedIds;

		// console.log(`${insertManyresult.insertedCount} documents were inserted.`);

		// for (let id of Object.values(ids)) {
		// 	console.log(`Inserted a document with id ${id}`);
		// }
		const fruitFinder = await myColl.find({});
		console.log(fruitFinder);

		// print a message if no documents were found
		if ((await myColl.countDocuments({})) === 0) {
			console.log("No documents found!");
		}
		for await (const doc of fruitFinder) {
			console.dir(doc);
		}
	} finally {

		await client.close(); // Ensures that the client will close when you finish/error
	}
}
run().catch(console.dir);

