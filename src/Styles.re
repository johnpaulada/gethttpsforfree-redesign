let displayFont = "Righteous, cursive";
let textFont = "Nunito, sans-serif";

let fullContainer = ReactDOMRe.Style.make(
  ~backgroundColor = "#FAFAFA",
  ~width = "100vw",
  ~minHeight = "100vh",
  ()
);

let header = ReactDOMRe.Style.make(
  ~backgroundImage = "url(/bg.svg)",
  ~backgroundSize = "cover",
  ~backgroundPosition = "center",
  ~backgroundAttachment = "fixed",
  ~width = "100vw",
  ~minHeight = "50vh",
  ~display = "flex",
  ~justifyContent = "center",
  ~alignItems = "center",
  ()
);

let title = ReactDOMRe.Style.make(
  ~fontFamily = displayFont,
  ~fontSize = "5vw",
  ~color = "#A593E0",
  ~letterSpacing = "5px",
  ~textShadow = "0 4px 2px #333",
  ()
);

let descriptionContainer = ReactDOMRe.Style.make(
  ~width = "100vw",
  ~display = "grid",
  ~gridTemplateColumns = "1fr 2fr 1fr",
  ~backgroundColor = "#FFFFF3",
  ~paddingTop = "3em",
  ~paddingBottom = "3em",
  ()
);

let description = ReactDOMRe.Style.make(
  ~gridColumn = "2 / 3",
  ~color = "#566270",
  ~fontSize = "32px",
  ~fontFamily = textFont,
  ~lineHeight = "1.5em",
  ()
)

let accountInfoContainer = ReactDOMRe.Style.make(
  ~display = "grid",
  ~gridTemplateColumns = "1fr 3fr 1fr",
  ~width = "100vw",
  ~backgroundColor = "#566270",
  ~padding = "1em",
  ()
)

let accountInfoDescription = ReactDOMRe.Style.make(
  ~fontSize = "24px",
  ~fontFamily = textFont,
  ~color = "#FFFFF3",
  ~margin = "0",
  ~gridColumn = "2 / 3",
  ()
)


let accountInfoTitle = ReactDOMRe.Style.make(
  ~fontSize = "36px",
  ~fontFamily = displayFont,
  ~color = "#FFFFF3",
  ~margin = "1em",
  ~marginLeft = "0",
  ~gridColumn = "2 / 3",
  ~letterSpacing = "3px",
  ()
)