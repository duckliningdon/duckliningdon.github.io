(function() {
  var quotes = [
    {
      text: "Ready to start the day, are we?"
    },
    {
      text: "Working on a secret project, are we, sir?"
    },
    {
      text: "Sir, I have an update from Malibu. The cranes have finally arrived and the cellar doors are being cleared as we speak."
    },
    {
      text: "It's 7 A.M. The weather in Malibu is 72 degrees with scattered clouds. The surf conditions are fair with waist to shoulder highlines, high tide will be at 10:52 a.m."
    },
    {
      text: "As always sir, a great pleasure watching you work."
    },
    {
      text: "Mark 42 inbound."
    },
    {
      text: "I prepared the flight plan, sir."
    },
    {
      text: "Sir... Agent Phil Coulson from S.H.I.E.L.D. is outside the door. Shall I attend to him?"
    },
    {
      text: "Sir, your flight leaves in twelve hours."
    },
    {
      text: "Sir, try to get some sunlight today. It is a splendid day."
    },
    {
      text: "Shall I prepare the mac n cheese for you, sir?"
    },
    {
      text: "Any luck on finding Joe, sir?"
    },
    {
      text: "Sir, did you forget to rest?"
    },
  ];
  var quote = quotes[Math.floor(Math.random() * quotes.length)];
  document.getElementById("quote").innerHTML =
    '<p>' + quote.text + '</p>'
})();
