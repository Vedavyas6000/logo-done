// <li>
//     <label>Member of Andra Mahasabha</label>
//     <span>*</span>
//     <div class="radio-group">
//         <input type="radio" id="yes" name="membership" value="yes" required>
//         <label for="yes">Yes</label>

//         <input type="radio" id="no" name="membership" value="no" required>
//         <label for="no">No</label>
//     </div>
//     <div id="member-details" style="display: none;">
//         <div id="yes-details" style="display: none;">
//             <label>Membership ID:</label>
//             <input type="text" id="membership-id" name="membership-id" required>

//             <label>Phone Number:</label>
//             <input type="tel" id="phone-number" name="phone-number" required>

//             <button id="send-otp">Send OTP</button>
//             <input type="text" id="otp" name="otp" placeholder="Enter OTP" style="display: none;">
//             <button id="verify-otp" style="display: none;">Verify OTP</button>
//         </div>
//         <div id="no-details" style="display: none;">
//             <label>Phone Number:</label>
//             <input type="tel" id="phone-number-no" name="phone-number-no" required>
//         </div>
//     </div>
// </li>

// <script>
//     const membershipRadio = document.querySelector('input[name="membership"]');
//     const memberDetails = document.getElementById('member-details');
//     const yesDetails = document.getElementById('yes-details');
//     const noDetails = document.getElementById('no-details');
//     const sendOtpButton = document.getElementById('send-otp');
//     const phoneNumberInputYes = document.getElementById('phone-number');
//     const phoneNumberInputNo = document.getElementById('phone-number-no');
//     const otpInput = document.getElementById('otp');
//     const verifyOtpButton = document.getElementById('verify-otp');

//     membershipRadio.addEventListener('change', (e) => {
//         if (e.target.value === 'yes') {
//             memberDetails.style.display = 'block';
//             yesDetails.style.display = 'block';
//             noDetails.style.display = 'none';
//         } else if (e.target.value === 'no') {
//             memberDetails.style.display = 'block';
//             yesDetails.style.display = 'none';
//             noDetails.style.display = 'block';
//         } else {
//             memberDetails.style.display = 'none';
//         }
//     });

//     sendOtpButton.addEventListener('click', () => {
//         const phoneNumber = phoneNumberInputYes.value;
//         // Send OTP to the phone number using your preferred method (e.g., API call)
//         // For demonstration purposes, we'll assume the OTP is sent successfully
//         otpInput.style.display = 'block';
//         verifyOtpButton.style.display = 'block';
//         sendOtpButton.style.display = 'none';
//     });

//     verifyOtpButton.addEventListener('click', () => {
//         const otp = otpInput.value;
//         // Verify the OTP using your preferred method (e.g., API call)
//         // For demonstration purposes, we'll assume the OTP is verified successfully
//         alert('OTP verified successfully!');
//     });
// </script>