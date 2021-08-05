/* The function should return the names of those entries whose date is the current date. The names should be separated by a comma.

For example, here's an array of three entries and assume the date now is 2021-01-21.

[{ name: "Johny" , date: "2021-01-21T02:53:42+05:30" }, { name: "Sugar" , date: "2021-01-22T02:53:42+05:30" }, { name: "Sun" , date: "2021-01-21T03:53:42+05:30" }]

The function should return: ``` Johny,Sun ```. Please note that the names are separated by a comma without space.
*/

function todaysEntries(entries) {
  const date = new Date();
  const new_date = [
    String(date.getFullYear()),
    String(date.getMonth()),
    String(date.getDate()),
  ];

  if (new_date[1].length === 1) new_date[1] = "0".concat(new_date[1]);
  if (new_date[2].length === 1) new_date[2] = "0".concat(new_date[2]);
  let stringDate = new_date.join("-");

  let result = entries.filter(
    (item) => item.date.substring(0, 10) == stringDate
  );
  let names = [];
  result.forEach((item) => names.push(item.name));
  if (names.length === 0) return "There are no entries today.";
  if (names.length === 1) return names[0];
  let stringNAme = names.join(", ");
  return stringNAme;
}

module.exports = todaysEntries;
