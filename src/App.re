let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: _self =>
    <div style=(Styles.fullContainer)>
      <header>
        <div style=(Styles.header)>
          <h1 style=(Styles.title)>
            {ReasonReact.string("Get HTTPS for free!")}
          </h1>
        </div>
      </header>
      <section>
        <div style=(Styles.descriptionContainer)>
          <p style=(Styles.description)>{ReasonReact.string("You can now get free https certificates (incuding wildcard certificates) from the non-profit certificate authority Let's Encrypt! This is a website that will take you through the manual steps to get your free https certificate so you can make your own website use https! This website is open source and NEVER asks for your private keys. Never trust a website that asks for your private keys!")}</p>
          <p style=(Styles.description)>{ReasonReact.string("NOTE: This website is for people who know how to generate certificate signing requests (CSRs)! If you're not familiar with how to do this, please use the official Let's Encrypt official client that can automatically issue and install https certificates for you. This website is designed for people who know what they are doing and just want to get their free https certificate.You can now get free https certificates (incuding wildcard certificates) from the non-profit certificate authority Let's Encrypt! This is a website that will take you through the manual steps to get your free https certificate so you can make your own website use https! This website is open source and NEVER asks for your private keys. Never trust a website that asks for your private keys!")}</p>
          <p style=(Styles.description)>{ReasonReact.string("If you need to renew a certificate, simply complete these steps below again.")}</p>
        </div>
        <div style=(Styles.accountInfoContainer)>
          <h2 style=(Styles.accountInfoTitle)>{ReasonReact.string("Step 1. Account Info")}</h2>
          <p style=(Styles.accountInfoDescription)>{ReasonReact.string("Let's Encrypt requires that you register an account email and public key before issuing a certificate. The email is so that they can contact you if needed, and the public key is so you can securely sign your requests to issue/revoke/renew your certificates. Keep your account private key secret! Anyone who has it can impersonate you when making requests to Let's Encrypt!")}</p>
        </div>
      </section>
    </div>,
};
