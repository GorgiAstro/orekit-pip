#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken$DoublyIndexedDoubleConsumer;
            class ParseToken$IntConsumer;
            class ParseToken$VectorConsumer;
            class ParseToken$UnitListConsumer;
            class TokenType;
            class ParseToken$DateConsumer;
            class ParseToken$RotationOrderConsumer;
            class ParseToken$StringConsumer;
            class ParseToken$IntegerArrayConsumer;
            class ParseToken$TimeSystemConsumer;
            class ParseToken$CenterConsumer;
            class ParseToken$CenterListConsumer;
            class ParseToken$ManeuvrableConsumer;
            class ParseToken$IndexedStringConsumer;
            class ParseToken$IndexedDoubleConsumer;
            class ParseToken$EnumConsumer;
            class ParseToken$StringListConsumer;
            class ParseToken$EnumListConsumer;
            class ParseToken$DoubleConsumer;
            class ParseToken$DoubleArrayConsumer;
            class ParseToken$IndexedIntConsumer;
            class ParseToken$CharConsumer;
            class ParseToken$BooleanConsumer;
            class ParseToken$FrameConsumer;
            class ParseToken$IndexedDoubleArrayConsumer;
            class ParseToken$LabeledDoubleConsumer;
          }
          class ContextBinding;
        }
        namespace ndm {
          class ParsedUnitsBehavior;
        }
      }
    }
    namespace bodies {
      class CelestialBodies;
    }
    namespace errors {
      class OrekitException;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Enum;
    class Class;
    class String;
    class Exception;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            class ParseToken : public ::java::lang::Object {
             public:
              enum {
                mid_init$_d6bac7905c736ea0,
                mid_generateException_d052fc9cf6f5844b,
                mid_getContentAsBoolean_b108b35ef48e27bd,
                mid_getContentAsDouble_dff5885c2c873297,
                mid_getContentAsEnum_89daf5756b979a3f,
                mid_getContentAsEnumList_401ab1d38e454dea,
                mid_getContentAsFreeTextList_2afa36052df4765d,
                mid_getContentAsInt_570ce0828f81a2c1,
                mid_getContentAsNormalizedList_2afa36052df4765d,
                mid_getContentAsNormalizedString_11b109bd155ca898,
                mid_getContentAsUppercaseCharacter_7818f5b58320cd1f,
                mid_getContentAsUppercaseList_2afa36052df4765d,
                mid_getContentAsUppercaseString_11b109bd155ca898,
                mid_getContentAsVector_d52645e0d4c07563,
                mid_getFileName_11b109bd155ca898,
                mid_getLineNumber_570ce0828f81a2c1,
                mid_getName_11b109bd155ca898,
                mid_getRawContent_11b109bd155ca898,
                mid_getType_84d7c9fbe413a208,
                mid_getUnits_de9b417ee3c58e2e,
                mid_processAsBoolean_c2c10107b59698d5,
                mid_processAsCenter_352f4165a1e45953,
                mid_processAsCenterList_a2dd64d160e0f13e,
                mid_processAsDate_76d464c871c16041,
                mid_processAsDouble_201f9d905574e3a2,
                mid_processAsDoubleArray_012305b3ff51003c,
                mid_processAsDoublyIndexedDouble_78a4e84495ab71c3,
                mid_processAsEnum_9b51427b2a1ad0a2,
                mid_processAsEnumsList_45bd0996d10efd47,
                mid_processAsFrame_7569c8bd7ef6fdc7,
                mid_processAsFreeTextList_a4664731e55cc9af,
                mid_processAsFreeTextString_d8110a3cc7ddda8f,
                mid_processAsIndexedDouble_479c08756527d591,
                mid_processAsIndexedDoubleArray_19480f93fda2b359,
                mid_processAsIndexedInteger_4b846c49ebb63cb4,
                mid_processAsIndexedNormalizedString_45ac2a2650da570c,
                mid_processAsIndexedUppercaseString_45ac2a2650da570c,
                mid_processAsInteger_bbe476ce7115f272,
                mid_processAsIntegerArray_b7a107ccd4f2c011,
                mid_processAsIntegerArrayNoSpace_b7a107ccd4f2c011,
                mid_processAsLabeledDouble_aeee2cf6113b76da,
                mid_processAsManeuvrableEnum_32fd44666c823152,
                mid_processAsNormalizedCharacter_29e78e5a30fb3f2a,
                mid_processAsNormalizedList_a4664731e55cc9af,
                mid_processAsNormalizedString_d8110a3cc7ddda8f,
                mid_processAsRotationOrder_861ca68cd0c7f23b,
                mid_processAsTimeSystem_51c4604197116207,
                mid_processAsUnitList_bd5fce894855dad0,
                mid_processAsUppercaseList_a4664731e55cc9af,
                mid_processAsUppercaseString_d8110a3cc7ddda8f,
                mid_processAsVector_793c8cdd146b2013,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken(const ParseToken& obj) : ::java::lang::Object(obj) {}

              ParseToken(const ::org::orekit::files::ccsds::utils::lexical::TokenType &, const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::utils::units::Unit &, jint, const ::java::lang::String &);

              ::org::orekit::errors::OrekitException generateException(const ::java::lang::Exception &) const;
              jboolean getContentAsBoolean() const;
              jdouble getContentAsDouble() const;
              ::java::lang::Enum getContentAsEnum(const ::java::lang::Class &) const;
              ::java::util::List getContentAsEnumList(const ::java::lang::Class &) const;
              ::java::util::List getContentAsFreeTextList() const;
              jint getContentAsInt() const;
              ::java::util::List getContentAsNormalizedList() const;
              ::java::lang::String getContentAsNormalizedString() const;
              jchar getContentAsUppercaseCharacter() const;
              ::java::util::List getContentAsUppercaseList() const;
              ::java::lang::String getContentAsUppercaseString() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getContentAsVector() const;
              ::java::lang::String getFileName() const;
              jint getLineNumber() const;
              ::java::lang::String getName() const;
              ::java::lang::String getRawContent() const;
              ::org::orekit::files::ccsds::utils::lexical::TokenType getType() const;
              ::org::orekit::utils::units::Unit getUnits() const;
              jboolean processAsBoolean(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer &) const;
              jboolean processAsCenter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer &, const ::org::orekit::bodies::CelestialBodies &) const;
              jboolean processAsCenterList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer &, const ::org::orekit::bodies::CelestialBodies &) const;
              jboolean processAsDate(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer &, const ::org::orekit::files::ccsds::utils::ContextBinding &) const;
              jboolean processAsDouble(const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer &) const;
              jboolean processAsDoubleArray(const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer &) const;
              jboolean processAsDoublyIndexedDouble(jint, jint, const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer &) const;
              jboolean processAsEnum(const ::java::lang::Class &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer &) const;
              jboolean processAsEnumsList(const ::java::lang::Class &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer &) const;
              jboolean processAsFrame(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer &, const ::org::orekit::files::ccsds::utils::ContextBinding &, jboolean, jboolean, jboolean) const;
              jboolean processAsFreeTextList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer &) const;
              jboolean processAsFreeTextString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer &) const;
              jboolean processAsIndexedDouble(jint, const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer &) const;
              jboolean processAsIndexedDoubleArray(jint, const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer &) const;
              jboolean processAsIndexedInteger(jint, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer &) const;
              jboolean processAsIndexedNormalizedString(jint, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer &) const;
              jboolean processAsIndexedUppercaseString(jint, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer &) const;
              jboolean processAsInteger(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer &) const;
              jboolean processAsIntegerArray(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer &) const;
              jboolean processAsIntegerArrayNoSpace(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer &) const;
              jboolean processAsLabeledDouble(jchar, const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer &) const;
              jboolean processAsManeuvrableEnum(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer &) const;
              jboolean processAsNormalizedCharacter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer &) const;
              jboolean processAsNormalizedList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer &) const;
              jboolean processAsNormalizedString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer &) const;
              jboolean processAsRotationOrder(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer &) const;
              jboolean processAsTimeSystem(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer &) const;
              jboolean processAsUnitList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer &) const;
              jboolean processAsUppercaseList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer &) const;
              jboolean processAsUppercaseString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer &) const;
              jboolean processAsVector(const ::org::orekit::utils::units::Unit &, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            extern PyType_Def PY_TYPE_DEF(ParseToken);
            extern PyTypeObject *PY_TYPE(ParseToken);

            class t_ParseToken {
            public:
              PyObject_HEAD
              ParseToken object;
              static PyObject *wrap_Object(const ParseToken&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
