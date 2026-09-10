const bgMusic = document.getElementById("bgMusic");
const bgMusicBtn = document.getElementById("musicBtn");
const bgMusicImg = document.getElementById("musicImg");
const musicOn = 'media/nanosong2.png';
const musicOff = 'media/nanosong1.png';
const musicVol = 0.1;
var musicTime = 0;

bgMusic.volume = musicVol;

bgMusicBtn.addEventListener('click', () => {
  if (bgMusic.paused) {
    bgMusic.play();

    bgMusicImg.src = musicOn;
  } else {
    bgMusic.pause();

    bgMusicImg.src = musicOff;
  }
})