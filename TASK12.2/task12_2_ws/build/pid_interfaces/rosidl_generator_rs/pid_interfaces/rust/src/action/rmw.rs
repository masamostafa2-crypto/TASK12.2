
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_Goal() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_Goal__init(msg: *mut YawPid_Goal) -> bool;
    fn pid_interfaces__action__YawPid_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_Goal>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_Goal>);
    fn pid_interfaces__action__YawPid_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_Goal>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_yaw: f64,

}



impl Default for YawPid_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_Goal__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_Goal() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_Result() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_Result__init(msg: *mut YawPid_Result) -> bool;
    fn pid_interfaces__action__YawPid_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_Result>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_Result>);
    fn pid_interfaces__action__YawPid_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_Result>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angle_turned: f64,

}



impl Default for YawPid_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_Result__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_Result where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_Result() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_Feedback__init(msg: *mut YawPid_Feedback) -> bool;
    fn pid_interfaces__action__YawPid_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_Feedback>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_Feedback>);
    fn pid_interfaces__action__YawPid_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_Feedback>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_yaw: f64,

}



impl Default for YawPid_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_Feedback__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_Feedback() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_FeedbackMessage__init(msg: *mut YawPid_FeedbackMessage) -> bool;
    fn pid_interfaces__action__YawPid_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_FeedbackMessage>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_FeedbackMessage>);
    fn pid_interfaces__action__YawPid_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_FeedbackMessage>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::YawPid_Feedback,

}



impl Default for YawPid_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_FeedbackMessage() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_Goal() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_Goal__init(msg: *mut LinearPid_Goal) -> bool;
    fn pid_interfaces__action__LinearPid_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Goal>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Goal>);
    fn pid_interfaces__action__LinearPid_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Goal>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_distance: f64,

}



impl Default for LinearPid_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_Goal__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_Goal() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_Result() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_Result__init(msg: *mut LinearPid_Result) -> bool;
    fn pid_interfaces__action__LinearPid_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Result>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Result>);
    fn pid_interfaces__action__LinearPid_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Result>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_travelled: f64,

}



impl Default for LinearPid_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_Result__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_Result where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_Result() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_Feedback__init(msg: *mut LinearPid_Feedback) -> bool;
    fn pid_interfaces__action__LinearPid_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Feedback>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Feedback>);
    fn pid_interfaces__action__LinearPid_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_Feedback>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_distance: f64,

}



impl Default for LinearPid_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_Feedback__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_Feedback() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_FeedbackMessage__init(msg: *mut LinearPid_FeedbackMessage) -> bool;
    fn pid_interfaces__action__LinearPid_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_FeedbackMessage>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_FeedbackMessage>);
    fn pid_interfaces__action__LinearPid_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_FeedbackMessage>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::LinearPid_Feedback,

}



impl Default for LinearPid_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_FeedbackMessage() }
  }
}




#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_SendGoal_Request__init(msg: *mut YawPid_SendGoal_Request) -> bool;
    fn pid_interfaces__action__YawPid_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_SendGoal_Request>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_SendGoal_Request>);
    fn pid_interfaces__action__YawPid_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_SendGoal_Request>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::YawPid_Goal,

}



impl Default for YawPid_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_SendGoal_Request() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_SendGoal_Response__init(msg: *mut YawPid_SendGoal_Response) -> bool;
    fn pid_interfaces__action__YawPid_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_SendGoal_Response>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_SendGoal_Response>);
    fn pid_interfaces__action__YawPid_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_SendGoal_Response>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for YawPid_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_SendGoal_Response() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_GetResult_Request__init(msg: *mut YawPid_GetResult_Request) -> bool;
    fn pid_interfaces__action__YawPid_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_GetResult_Request>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_GetResult_Request>);
    fn pid_interfaces__action__YawPid_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_GetResult_Request>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for YawPid_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_GetResult_Request() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__YawPid_GetResult_Response__init(msg: *mut YawPid_GetResult_Response) -> bool;
    fn pid_interfaces__action__YawPid_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YawPid_GetResult_Response>, size: usize) -> bool;
    fn pid_interfaces__action__YawPid_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YawPid_GetResult_Response>);
    fn pid_interfaces__action__YawPid_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YawPid_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<YawPid_GetResult_Response>) -> bool;
}

// Corresponds to pid_interfaces__action__YawPid_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YawPid_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::YawPid_Result,

}



impl Default for YawPid_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__YawPid_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__YawPid_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YawPid_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__YawPid_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YawPid_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YawPid_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/YawPid_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__YawPid_GetResult_Response() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_SendGoal_Request__init(msg: *mut LinearPid_SendGoal_Request) -> bool;
    fn pid_interfaces__action__LinearPid_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Request>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Request>);
    fn pid_interfaces__action__LinearPid_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Request>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::LinearPid_Goal,

}



impl Default for LinearPid_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_SendGoal_Request() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_SendGoal_Response__init(msg: *mut LinearPid_SendGoal_Response) -> bool;
    fn pid_interfaces__action__LinearPid_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Response>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Response>);
    fn pid_interfaces__action__LinearPid_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_SendGoal_Response>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for LinearPid_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_SendGoal_Response() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_GetResult_Request__init(msg: *mut LinearPid_GetResult_Request) -> bool;
    fn pid_interfaces__action__LinearPid_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_GetResult_Request>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_GetResult_Request>);
    fn pid_interfaces__action__LinearPid_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_GetResult_Request>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for LinearPid_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_GetResult_Request() }
  }
}


#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "pid_interfaces__rosidl_generator_c")]
extern "C" {
    fn pid_interfaces__action__LinearPid_GetResult_Response__init(msg: *mut LinearPid_GetResult_Response) -> bool;
    fn pid_interfaces__action__LinearPid_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_GetResult_Response>, size: usize) -> bool;
    fn pid_interfaces__action__LinearPid_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LinearPid_GetResult_Response>);
    fn pid_interfaces__action__LinearPid_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LinearPid_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LinearPid_GetResult_Response>) -> bool;
}

// Corresponds to pid_interfaces__action__LinearPid_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LinearPid_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::LinearPid_Result,

}



impl Default for LinearPid_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pid_interfaces__action__LinearPid_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to pid_interfaces__action__LinearPid_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LinearPid_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pid_interfaces__action__LinearPid_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LinearPid_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LinearPid_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "pid_interfaces/action/LinearPid_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pid_interfaces__action__LinearPid_GetResult_Response() }
  }
}






#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__YawPid_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to pid_interfaces__action__YawPid_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct YawPid_SendGoal;

impl rosidl_runtime_rs::Service for YawPid_SendGoal {
    type Request = YawPid_SendGoal_Request;
    type Response = YawPid_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__YawPid_SendGoal() }
    }
}




#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__YawPid_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to pid_interfaces__action__YawPid_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct YawPid_GetResult;

impl rosidl_runtime_rs::Service for YawPid_GetResult {
    type Request = YawPid_GetResult_Request;
    type Response = YawPid_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__YawPid_GetResult() }
    }
}




#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__LinearPid_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to pid_interfaces__action__LinearPid_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct LinearPid_SendGoal;

impl rosidl_runtime_rs::Service for LinearPid_SendGoal {
    type Request = LinearPid_SendGoal_Request;
    type Response = LinearPid_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__LinearPid_SendGoal() }
    }
}




#[link(name = "pid_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__LinearPid_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to pid_interfaces__action__LinearPid_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct LinearPid_GetResult;

impl rosidl_runtime_rs::Service for LinearPid_GetResult {
    type Request = LinearPid_GetResult_Request;
    type Response = LinearPid_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__pid_interfaces__action__LinearPid_GetResult() }
    }
}


