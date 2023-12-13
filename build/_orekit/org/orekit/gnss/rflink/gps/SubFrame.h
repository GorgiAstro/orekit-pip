#ifndef org_orekit_gnss_rflink_gps_SubFrame_H
#define org_orekit_gnss_rflink_gps_SubFrame_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class EncodedMessage;
        }
      }
      namespace rflink {
        namespace gps {
          class SubFrame;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          class SubFrame : public ::java::lang::Object {
           public:
            enum {
              mid_checkParity_75f431eefaad4f32,
              mid_getAlert_55546ef6a647f39b,
              mid_getAntiSpoofing_55546ef6a647f39b,
              mid_getId_55546ef6a647f39b,
              mid_getIntegrityStatus_55546ef6a647f39b,
              mid_getMessage_55546ef6a647f39b,
              mid_getPreamble_55546ef6a647f39b,
              mid_getTow_55546ef6a647f39b,
              mid_hasParityErrors_9ab94ac1dc23b105,
              mid_parse_5d8d319ba7c11045,
              mid_setField_d001b9440055cbbc,
              mid_setField_28f32421fe0b8040,
              mid_getField_0e7cf35192c3effe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame(const SubFrame& obj) : ::java::lang::Object(obj) {}

            static jint PREAMBLE_VALUE;

            static jboolean checkParity(jint, jint);
            jint getAlert() const;
            jint getAntiSpoofing() const;
            jint getId() const;
            jint getIntegrityStatus() const;
            jint getMessage() const;
            jint getPreamble() const;
            jint getTow() const;
            jboolean hasParityErrors() const;
            static SubFrame parse(const ::org::orekit::gnss::metric::parser::EncodedMessage &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          extern PyType_Def PY_TYPE_DEF(SubFrame);
          extern PyTypeObject *PY_TYPE(SubFrame);

          class t_SubFrame {
          public:
            PyObject_HEAD
            SubFrame object;
            static PyObject *wrap_Object(const SubFrame&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
