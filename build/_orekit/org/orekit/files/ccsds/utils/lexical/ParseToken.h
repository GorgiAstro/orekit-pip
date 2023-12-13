#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken$RotationOrderConsumer;
            class ParseToken$IndexedStringConsumer;
            class ParseToken$FrameConsumer;
            class ParseToken$TimeSystemConsumer;
            class ParseToken$IndexedDoubleConsumer;
            class ParseToken$VectorConsumer;
            class ParseToken$LabeledDoubleConsumer;
            class ParseToken$StringListConsumer;
            class ParseToken$UnitListConsumer;
            class ParseToken$EnumListConsumer;
            class ParseToken$StringConsumer;
            class ParseToken$ManeuvrableConsumer;
            class TokenType;
            class ParseToken$IndexedIntConsumer;
            class ParseToken$IntConsumer;
            class ParseToken$IndexedDoubleArrayConsumer;
            class ParseToken$CenterListConsumer;
            class ParseToken$IntegerArrayConsumer;
            class ParseToken$DoubleConsumer;
            class ParseToken$DateConsumer;
            class ParseToken$CenterConsumer;
            class ParseToken$DoubleArrayConsumer;
            class ParseToken$EnumConsumer;
            class ParseToken$CharConsumer;
            class ParseToken$DoublyIndexedDoubleConsumer;
            class ParseToken$BooleanConsumer;
          }
          class ContextBinding;
        }
        namespace ndm {
          class ParsedUnitsBehavior;
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace bodies {
      class CelestialBodies;
    }
    namespace errors {
      class OrekitException;
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
                mid_init$_ff11f9e3d9e4cb50,
                mid_generateException_83f066486b752c49,
                mid_getContentAsBoolean_9ab94ac1dc23b105,
                mid_getContentAsDouble_b74f83833fdad017,
                mid_getContentAsEnum_e83b47680c533776,
                mid_getContentAsEnumList_c7d2d1c8b99782de,
                mid_getContentAsFreeTextList_e62d3bb06d56d7e3,
                mid_getContentAsInt_55546ef6a647f39b,
                mid_getContentAsNormalizedList_e62d3bb06d56d7e3,
                mid_getContentAsNormalizedString_1c1fa1e935d6cdcf,
                mid_getContentAsUppercaseCharacter_5e2f8fc4d7c03fbd,
                mid_getContentAsUppercaseList_e62d3bb06d56d7e3,
                mid_getContentAsUppercaseString_1c1fa1e935d6cdcf,
                mid_getContentAsVector_8b724f8b4fdad1a2,
                mid_getFileName_1c1fa1e935d6cdcf,
                mid_getLineNumber_55546ef6a647f39b,
                mid_getName_1c1fa1e935d6cdcf,
                mid_getRawContent_1c1fa1e935d6cdcf,
                mid_getType_6a00f69105284aab,
                mid_getUnits_6466188dbb1eea22,
                mid_processAsBoolean_6ce31a1abe723a1c,
                mid_processAsCenter_9c8156e918128908,
                mid_processAsCenterList_d6f264d980210dc1,
                mid_processAsDate_e1b93d36f5699839,
                mid_processAsDouble_c4040ec3da8d5d7a,
                mid_processAsDoubleArray_8b8692f0ae4a83b5,
                mid_processAsDoublyIndexedDouble_7a747552c120c83b,
                mid_processAsEnum_276b8667d6fbcd61,
                mid_processAsEnumsList_3448942b7d029341,
                mid_processAsFrame_158737351dca7a47,
                mid_processAsFreeTextList_d9fb86dfdec8b415,
                mid_processAsFreeTextString_034e896419ef4f59,
                mid_processAsIndexedDouble_aac489dc10588899,
                mid_processAsIndexedDoubleArray_6d0af2e2f45e5ff5,
                mid_processAsIndexedInteger_e44d59f138e01710,
                mid_processAsIndexedNormalizedString_47ba468f55500e86,
                mid_processAsIndexedUppercaseString_47ba468f55500e86,
                mid_processAsInteger_3f4ad73f3811cc5d,
                mid_processAsIntegerArray_302a8d372179e12a,
                mid_processAsIntegerArrayNoSpace_302a8d372179e12a,
                mid_processAsLabeledDouble_4ca4a91eb7c1cf81,
                mid_processAsManeuvrableEnum_3bf09164ba042a1c,
                mid_processAsNormalizedCharacter_734e277854810307,
                mid_processAsNormalizedList_d9fb86dfdec8b415,
                mid_processAsNormalizedString_034e896419ef4f59,
                mid_processAsRotationOrder_39dab3d5f5ec57f9,
                mid_processAsTimeSystem_74b34998c4f00da3,
                mid_processAsUnitList_1bb54ede335382b1,
                mid_processAsUppercaseList_d9fb86dfdec8b415,
                mid_processAsUppercaseString_034e896419ef4f59,
                mid_processAsVector_57e5a5ab6c57eb33,
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
