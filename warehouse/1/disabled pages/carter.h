<!-- carter's code
<!DOCTYPE html>
<html>
<head>
  <style>
  @import url(https://fonts.googleapis.com/css?family=Nunito);

html {
  height: 100%;
  overflow: hidden;
}

body {
  margin:0;
  padding:0;
	perspective: 1px;
	transform-style: preserve-3d;
  height: 100%;
  overflow-y: scroll;
  overflow-x: hidden;
  font-family: Nunito;
}

h1 {
   font-size: 250%
}

p {
  font-size: 140%;
  line-height: 150%;
  color: #333;
}

.slide {
  position:  relative;
  padding: 25vh 10%;
  min-height: 100vh;
  width: 100vw;
  box-sizing: border-box;
  box-shadow: 0 -1px 10px rgba(0, 0, 0, .7);
	transform-style: inherit;
}

img {
  position: absolute;
  top: 50%;
  left: 35%;
  width: 320px;
  height: 240px;
  transform: translateZ(.25px) scale(.75) translateX(-94%) translateY(-100%) rotate(2deg);
  padding: 10px;
  border-radius: 5px;
  background: rgba(240,230,220, .7);
  box-shadow: 0 0 8px rgba(0, 0, 0, .7);
}

img:last-of-type {
  transform: translateZ(.4px) scale(.6) translateX(-104%) translateY(-40%) rotate(-5deg);
}

.slide:before {
  content: "";
  position: absolute;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  box-shadow: 0 0 8px 1px rgba(0, 0, 0, .7);
}

.title {
  width: 50%;
  padding: 5%;
  border-radius: 5px;
  background: rgba(240,240,240, .6);
  box-shadow: 0 0 8px rgba(0, 0, 0, .7);
}

.slide:nth-child(2n) .title {
  margin-left: 0;
  margin-right: auto;
}

.slide:nth-child(2n+1) .title {
  margin-left: auto;
  margin-right: 0;
}

.slide, .slide:before {
  background: 50% 50% / cover;
}

.header {
  text-align: center;
  font-size: 175%;
  color: #fff;
  text-shadow: 0 2px 2px #000;
}

#title {
  background-image: url("https://images.pexels.com/photos/695644/pexels-photo-695644.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=750&w=1260");
  z-index:2;
}

#title h1 {
 transform: translateZ(.25px) scale(.75);
 transform-origin: 50% 100%;

}

#slide1:before {
  background-image: url("http://informationcommunicationtechnology.com/wp-content/uploads/2018/06/Natural-dark-blood-wallpaper-0937-1024x623.jpg");
  transform: translateZ(-1px) scale(2);
}

#slide2 {
  background-image: url("https://i.gyazo.com/dbd0b3208584bfddce774f77d418b8c1.png");
  z-index:2;
}

#slide3:before {
  background-image: url("https://images4.alphacoders.com/282/28246.png");
  transform: translateZ(-1px) scale(2);
}

#slide4 {

  background-image: url("http://getwallpapers.com/wallpaper/full/9/8/2/871784-yandere-simulator-wallpapers-2732x1536-notebook.jpg");
  z-index:2;
}
  </style>



  <script src="./script.js"></script>


  <title>「ｒｅ：Ｌｉｖｅ」</title>
</head>
<body>
  <div id="title" class="slide header">
    <h1>ｉｎｆｏ   ａｂｏｕｔ   ｍｅ</h1>
  </div>

  <div id="slide1" class="slide">
    <div class="title">
      <h1>𝕘𝕖𝕟𝕖𝕣𝕒𝕝</h1>
      <p>ａｇｅ： ｘｖｉｉ</p>
      <P>ｎａｍｅ： </p>
      <p>ｇｅｎｄｅｒ： ｍａｌｅ</p>
    </div>
  </div>

  <div id="slide2" class="slide">
    <div class="title">
      <h1>𝕚𝕟𝕥𝕖𝕣𝕖𝕤𝕥𝕤</h1>
      <p>ｇａｍｅｓ</p>
      <p>ａｎｉｍｅ</p>
      <p>ｍｕｓｉｃ</p>
      <p>ｃｏｄｅ</p>
      <p>ｄｅｓｉｇｎ</p>
    </div>
    <img src="http://www.toca-ch.com/data/walls/33/22255955.jpg">
    <img src="https://data.whicdn.com/images/62812321/large.jpg">
  </div>

  <div id="slide3" class="slide">
    <div class="title">
      <h1>𝕗𝕝𝕠𝕨𝕖𝕣</h1>
      <p>ｔｈｉｓ ｆｌｏｗｅｒ ｉｓ ｐｒｅｔｔｙ</p>
    </div>
  </div>

  <div id="slide4" class="slide header">
      <h1>𝒶𝓃𝒾𝓂𝑒 𝒾𝓈 𝓃𝒾𝒸𝑒
</h1>
  </div>
</body>
</html>
