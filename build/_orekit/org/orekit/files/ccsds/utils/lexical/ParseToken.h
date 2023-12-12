#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken$StringListConsumer;
            class ParseToken$CenterListConsumer;
            class ParseToken$IndexedDoubleConsumer;
            class ParseToken$LabeledDoubleConsumer;
            class ParseToken$IntConsumer;
            class ParseToken$IntegerArrayConsumer;
            class ParseToken$DateConsumer;
            class ParseToken$DoubleArrayConsumer;
            class ParseToken$CharConsumer;
            class ParseToken$ManeuvrableConsumer;
            class ParseToken$VectorConsumer;
            class ParseToken$IndexedStringConsumer;
            class ParseToken$DoubleConsumer;
            class TokenType;
            class ParseToken$FrameConsumer;
            class ParseToken$BooleanConsumer;
            class ParseToken$EnumListConsumer;
            class ParseToken$RotationOrderConsumer;
            class ParseToken$UnitListConsumer;
            class ParseToken$IndexedDoubleArrayConsumer;
            class ParseToken$DoublyIndexedDoubleConsumer;
            class ParseToken$CenterConsumer;
            class ParseToken$IndexedIntConsumer;
            class ParseToken$EnumConsumer;
            class ParseToken$StringConsumer;
            class ParseToken$TimeSystemConsumer;
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
                mid_init$_717f867ead0d2032,
                mid_generateException_1f30b03cfe55d2b4,
                mid_getContentAsBoolean_89b302893bdbe1f1,
                mid_getContentAsDouble_557b8123390d8d0c,
                mid_getContentAsEnum_65e8240ea4d8205f,
                mid_getContentAsEnumList_d848ef13695cc5e8,
                mid_getContentAsFreeTextList_0d9551367f7ecdef,
                mid_getContentAsInt_412668abc8d889e9,
                mid_getContentAsNormalizedList_0d9551367f7ecdef,
                mid_getContentAsNormalizedString_3cffd47377eca18a,
                mid_getContentAsUppercaseCharacter_d156d1ce330f6993,
                mid_getContentAsUppercaseList_0d9551367f7ecdef,
                mid_getContentAsUppercaseString_3cffd47377eca18a,
                mid_getContentAsVector_f88961cca75a2c0a,
                mid_getFileName_3cffd47377eca18a,
                mid_getLineNumber_412668abc8d889e9,
                mid_getName_3cffd47377eca18a,
                mid_getRawContent_3cffd47377eca18a,
                mid_getType_fa8f7d64cef625f1,
                mid_getUnits_3267fc1a8500bfc2,
                mid_processAsBoolean_436ee5f831330d4a,
                mid_processAsCenter_b719d3405ad290e2,
                mid_processAsCenterList_a2f2595f1cf39d1b,
                mid_processAsDate_f353b54f8f89d8fb,
                mid_processAsDouble_2d320c95873098e8,
                mid_processAsDoubleArray_1cf304c10f6be1d3,
                mid_processAsDoublyIndexedDouble_affddc9b2a3ca557,
                mid_processAsEnum_c989809c021427de,
                mid_processAsEnumsList_9fe2bac987ebd579,
                mid_processAsFrame_3c30940140d573e9,
                mid_processAsFreeTextList_b23e65b120984e55,
                mid_processAsFreeTextString_281cdf77bf485b17,
                mid_processAsIndexedDouble_72aad951ffac0397,
                mid_processAsIndexedDoubleArray_ab253c953fe189fd,
                mid_processAsIndexedInteger_eaa9841397949d23,
                mid_processAsIndexedNormalizedString_0e6ca734c8ed6927,
                mid_processAsIndexedUppercaseString_0e6ca734c8ed6927,
                mid_processAsInteger_6713fd0b65a7257c,
                mid_processAsIntegerArray_8b24d41f7d96b8b3,
                mid_processAsIntegerArrayNoSpace_8b24d41f7d96b8b3,
                mid_processAsLabeledDouble_595f6caed626b216,
                mid_processAsManeuvrableEnum_3178dafa66cc8655,
                mid_processAsNormalizedCharacter_1028dc3af0c033d4,
                mid_processAsNormalizedList_b23e65b120984e55,
                mid_processAsNormalizedString_281cdf77bf485b17,
                mid_processAsRotationOrder_0014e3be4cb3f1df,
                mid_processAsTimeSystem_31ec7f4c8c0224d7,
                mid_processAsUnitList_515675c50bb421a1,
                mid_processAsUppercaseList_b23e65b120984e55,
                mid_processAsUppercaseString_281cdf77bf485b17,
                mid_processAsVector_9383ee69f50eb33c,
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
