var Themes = {
    theme1: {
        border: "#037934",
        boxDark: "#339966",
        boxLight: "#99cc99",
        fontDark: "#000",
        fontLight: "#fff",
        chessFont: 'font1'

    },
    theme2: {
        border: "#006699",
        boxDark: "#6699cc",
        boxLight: "#99CCFF",
        fontDark: "#000",
        fontLight: "#fff",
        chessFont: 'font2'

    },
    theme3: {
        border: "#CC8227",
        boxDark: "#FFA331",
        boxLight: "#FFC57D",
        fontDark: "#000",
        fontLight: "#fff",
        chessFont: 'font3'
    },
    theme4: {
        border: "#49227F",
        boxDark: "#9245FF",
        boxLight: "#BF91FF",
        fontDark: "#000",
        fontLight: "#fff",
        chessFont: 'font4'

    },
    theme5: {
        border: "#7F3C50",
        boxDark: "#FF78A0",
        boxLight: "#FFB1C8",
        fontDark: "#000",
        fontLight: "#fff",
        chessFont: 'font5'

    }
};
function change() {
    var themesList = document.getElementById("themes-list");
    themesList.addEventListener("click", function (e) {
        if (e.target.parentElement.id === "theme1") {
            document.documentElement.style.setProperty('--border', Themes.theme1.border);
            document.documentElement.style.setProperty('--dark_box', Themes.theme1.boxDark);
            document.documentElement.style.setProperty('--light_box', Themes.theme1.boxLight);
            document.documentElement.style.setProperty('--font', Themes.theme1.chessFont);

        } else if (e.target.parentElement.id === "theme2") {
            document.documentElement.style.setProperty('--border', Themes.theme2.border);
            document.documentElement.style.setProperty('--dark_box', Themes.theme2.boxDark);
            document.documentElement.style.setProperty('--light_box', Themes.theme2.boxLight);
            document.documentElement.style.setProperty('--font', Themes.theme2.chessFont);
        }
        else if (e.target.parentElement.id === "theme3") {
            document.documentElement.style.setProperty('--border', Themes.theme3.border);
            document.documentElement.style.setProperty('--dark_box', Themes.theme3.boxDark);
            document.documentElement.style.setProperty('--light_box', Themes.theme3.boxLight);
            document.documentElement.style.setProperty('--font', Themes.theme3.chessFont);

        }
        else if (e.target.parentElement.id === "theme4") {
            document.documentElement.style.setProperty('--border', Themes.theme4.border);
            document.documentElement.style.setProperty('--dark_box', Themes.theme4.boxDark);
            document.documentElement.style.setProperty('--light_box', Themes.theme4.boxLight);
            document.documentElement.style.setProperty('--font', Themes.theme4.chessFont);
        }
        else if (e.target.parentElement.id === "theme5") {
            document.documentElement.style.setProperty('--border', Themes.theme5.border);
            document.documentElement.style.setProperty('--dark_box', Themes.theme5.boxDark);
            document.documentElement.style.setProperty('--light_box', Themes.theme5.boxLight);
            document.documentElement.style.setProperty('--font', Themes.theme5.chessFont);
        }
    });
};

function moveThemes() {
    var themes = document.getElementById("themes");
    themes.addEventListener("click", function () {
      if(  ($( "#themes" ).hasClass( "move" ))){
          themes.classList.remove("move");
      }
        else themes.className = themes.className + " move";
    });
};
// window.onload = function () {
//     setTimeout(change, 1000);
//     moveThemes();
// };

