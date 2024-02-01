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
            class ParseToken$RotationOrderConsumer;
            class ParseToken$CenterListConsumer;
            class ParseToken$CharConsumer;
            class ParseToken$CenterConsumer;
            class ParseToken$IndexedDoubleArrayConsumer;
            class ParseToken$ManeuvrableConsumer;
            class ParseToken$IndexedIntConsumer;
            class ParseToken$VectorConsumer;
            class ParseToken$StringListConsumer;
            class ParseToken$LabeledDoubleConsumer;
            class ParseToken$IntConsumer;
            class ParseToken$StringConsumer;
            class ParseToken$EnumListConsumer;
            class ParseToken$IntegerArrayConsumer;
            class ParseToken$BooleanConsumer;
            class ParseToken$IndexedStringConsumer;
            class ParseToken$IndexedDoubleConsumer;
            class ParseToken$TimeSystemConsumer;
            class ParseToken$DoubleArrayConsumer;
            class ParseToken$FrameConsumer;
            class TokenType;
            class ParseToken$DateConsumer;
            class ParseToken$EnumConsumer;
            class ParseToken$DoubleConsumer;
            class ParseToken$UnitListConsumer;
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
                mid_init$_489a227a5084415f,
                mid_generateException_f0b5e3496a959493,
                mid_getContentAsBoolean_eee3de00fe971136,
                mid_getContentAsDouble_9981f74b2d109da6,
                mid_getContentAsEnum_21e011703cf38ef0,
                mid_getContentAsEnumList_e1d925775d4adff5,
                mid_getContentAsFreeTextList_d751c1a57012b438,
                mid_getContentAsInt_d6ab429752e7c267,
                mid_getContentAsNormalizedList_d751c1a57012b438,
                mid_getContentAsNormalizedString_d2c8eb4129821f0e,
                mid_getContentAsUppercaseCharacter_153df32fe8b51cb6,
                mid_getContentAsUppercaseList_d751c1a57012b438,
                mid_getContentAsUppercaseString_d2c8eb4129821f0e,
                mid_getContentAsVector_032312bdeb3f2f93,
                mid_getFileName_d2c8eb4129821f0e,
                mid_getLineNumber_d6ab429752e7c267,
                mid_getName_d2c8eb4129821f0e,
                mid_getRawContent_d2c8eb4129821f0e,
                mid_getType_f4ebe1b79f29bb69,
                mid_getUnits_b1bb36679ea369c9,
                mid_processAsBoolean_e3d1693258576011,
                mid_processAsCenter_1c1425c11c07235f,
                mid_processAsCenterList_551d40fbdf9eb23b,
                mid_processAsDate_4ad44c4d8a6d00aa,
                mid_processAsDouble_05d9d8b83725fdfd,
                mid_processAsDoubleArray_b730ee473c72d83e,
                mid_processAsDoublyIndexedDouble_18c42f01485b64c7,
                mid_processAsEnum_18c6048ff424c0ed,
                mid_processAsEnumsList_d81322bcf2e19849,
                mid_processAsFrame_f1da7ab449626b9d,
                mid_processAsFreeTextList_2ab8bff756227e9f,
                mid_processAsFreeTextString_656b45dac5b3bbf9,
                mid_processAsIndexedDouble_ac031c97704b9d0f,
                mid_processAsIndexedDoubleArray_2301490f3007b220,
                mid_processAsIndexedInteger_7afd642ed21c80b1,
                mid_processAsIndexedNormalizedString_11904d50b022ff75,
                mid_processAsIndexedUppercaseString_11904d50b022ff75,
                mid_processAsInteger_3dd762e73ec3370d,
                mid_processAsIntegerArray_9cf826d4bd8d05e1,
                mid_processAsIntegerArrayNoSpace_9cf826d4bd8d05e1,
                mid_processAsLabeledDouble_db3f909f232a3c60,
                mid_processAsManeuvrableEnum_54831767634d65eb,
                mid_processAsNormalizedCharacter_8b6f39dfba94476f,
                mid_processAsNormalizedList_2ab8bff756227e9f,
                mid_processAsNormalizedString_656b45dac5b3bbf9,
                mid_processAsRotationOrder_fb2b75e40550321a,
                mid_processAsTimeSystem_80c470b1419956d2,
                mid_processAsUnitList_bbf33819dea38151,
                mid_processAsUppercaseList_2ab8bff756227e9f,
                mid_processAsUppercaseString_656b45dac5b3bbf9,
                mid_processAsVector_437a26d531f20560,
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
