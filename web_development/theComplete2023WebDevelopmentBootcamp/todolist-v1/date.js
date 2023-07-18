
exports.getDate = ()=>{
  const today = new Date();
  // gets the string of the name of the day
  const dayOptions = {weekday:"long", day:"numeric", month:"long"};
  return today.toLocaleDateString("en-US",dayOptions);
}

exports.getDay = () =>{
  const today = new Date();
  // gets the string of the name of the day
  let dayOptions = {weekday:"long"};
  return today.toLocaleDateString("en-US",dayOptions);
}
