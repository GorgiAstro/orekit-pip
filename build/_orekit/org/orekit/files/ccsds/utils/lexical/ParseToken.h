#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken$IndexedDoubleArrayConsumer;
            class ParseToken$CenterListConsumer;
            class ParseToken$LabeledDoubleConsumer;
            class ParseToken$IntConsumer;
            class ParseToken$ManeuvrableConsumer;
            class ParseToken$DoublyIndexedDoubleConsumer;
            class ParseToken$IndexedIntConsumer;
            class ParseToken$RotationOrderConsumer;
            class ParseToken$CenterConsumer;
            class ParseToken$TimeSystemConsumer;
            class ParseToken$DoubleArrayConsumer;
            class ParseToken$IndexedStringConsumer;
            class ParseToken$StringConsumer;
            class ParseToken$DoubleConsumer;
            class ParseToken$EnumListConsumer;
            class ParseToken$DateConsumer;
            class ParseToken$IntegerArrayConsumer;
            class ParseToken$FrameConsumer;
            class ParseToken$StringListConsumer;
            class ParseToken$EnumConsumer;
            class ParseToken$CharConsumer;
            class ParseToken$IndexedDoubleConsumer;
            class ParseToken$VectorConsumer;
            class ParseToken$BooleanConsumer;
            class ParseToken$UnitListConsumer;
            class TokenType;
          }
          class ContextBinding;
        }
        namespace ndm {
          class ParsedUnitsBehavior;
        }
      }
    }
    namespace errors {
      class OrekitException;
    }
    namespace bodies {
      class CelestialBodies;
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
                mid_init$_2664145c2f93a295,
                mid_generateException_13c04dd3f735d81a,
                mid_getContentAsBoolean_e470b6d9e0d979db,
                mid_getContentAsDouble_456d9a2f64d6b28d,
                mid_getContentAsEnum_b8da8b286eb9770c,
                mid_getContentAsEnumList_d43d3f945a8de36f,
                mid_getContentAsFreeTextList_a6156df500549a58,
                mid_getContentAsInt_f2f64475e4580546,
                mid_getContentAsNormalizedList_a6156df500549a58,
                mid_getContentAsNormalizedString_0090f7797e403f43,
                mid_getContentAsUppercaseCharacter_29e026b9d068f1c7,
                mid_getContentAsUppercaseList_a6156df500549a58,
                mid_getContentAsUppercaseString_0090f7797e403f43,
                mid_getContentAsVector_17a952530a808943,
                mid_getFileName_0090f7797e403f43,
                mid_getLineNumber_f2f64475e4580546,
                mid_getName_0090f7797e403f43,
                mid_getRawContent_0090f7797e403f43,
                mid_getType_a288b82527ddd2de,
                mid_getUnits_196b004fd4585106,
                mid_processAsBoolean_15e3c92b59d60e20,
                mid_processAsCenter_4b3fc7dc27a085ce,
                mid_processAsCenterList_42e5d18386cfa025,
                mid_processAsDate_c531de3c386ab684,
                mid_processAsDouble_0cc02a116ac8c243,
                mid_processAsDoubleArray_614ded53782c6336,
                mid_processAsDoublyIndexedDouble_260d1494eea93a24,
                mid_processAsEnum_d8a3ec2e7453cbca,
                mid_processAsEnumsList_34e4b46279e3b834,
                mid_processAsFrame_c70f6f373d5ea624,
                mid_processAsFreeTextList_20dbcf5ca848e6b5,
                mid_processAsFreeTextString_974496867228e5d2,
                mid_processAsIndexedDouble_0252974c60172882,
                mid_processAsIndexedDoubleArray_6b5a9e66ea49b585,
                mid_processAsIndexedInteger_a0b75e58313e981b,
                mid_processAsIndexedNormalizedString_62517abf6f494077,
                mid_processAsIndexedUppercaseString_62517abf6f494077,
                mid_processAsInteger_2328198f978a2786,
                mid_processAsIntegerArray_c4b7278debc335e6,
                mid_processAsIntegerArrayNoSpace_c4b7278debc335e6,
                mid_processAsLabeledDouble_e0c1fada55cd206b,
                mid_processAsManeuvrableEnum_a5401db6566584fc,
                mid_processAsNormalizedCharacter_e84975a52a49ada8,
                mid_processAsNormalizedList_20dbcf5ca848e6b5,
                mid_processAsNormalizedString_974496867228e5d2,
                mid_processAsRotationOrder_d9bf1bd440a4c4ed,
                mid_processAsTimeSystem_2051b0414bb5b9fc,
                mid_processAsUnitList_6169013488c8f5d8,
                mid_processAsUppercaseList_20dbcf5ca848e6b5,
                mid_processAsUppercaseString_974496867228e5d2,
                mid_processAsVector_dfdac999eabaf91b,
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
