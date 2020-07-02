(function() {
  var quotes = [
    {
      text: "This page seems to not exist, sir."
    },
    {
      text: "It looks like you took a wrong turn, sir."
    },
    {
      text: "You are going to be late for your flight, sir."
    },
    {
      text: "The quest for Joe never ends."
    },
  ];
  var quote = quotes[Math.floor(Math.random() * quotes.length)];
  document.getElementById("quote").innerHTML =
    '<p>' + quote.text + '</p>'
})();
