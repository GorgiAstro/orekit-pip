#ifndef org_orekit_gnss_rflink_gps_SubFrame_H
#define org_orekit_gnss_rflink_gps_SubFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          class SubFrame;
        }
      }
      namespace metric {
        namespace parser {
          class EncodedMessage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
              mid_checkParity_4bcf680fb63dc524,
              mid_getAlert_570ce0828f81a2c1,
              mid_getAntiSpoofing_570ce0828f81a2c1,
              mid_getId_570ce0828f81a2c1,
              mid_getIntegrityStatus_570ce0828f81a2c1,
              mid_getMessage_570ce0828f81a2c1,
              mid_getPreamble_570ce0828f81a2c1,
              mid_getTow_570ce0828f81a2c1,
              mid_hasParityErrors_b108b35ef48e27bd,
              mid_parse_47ae5458c8202d96,
              mid_setField_ea6ddf4b94154dc7,
              mid_setField_6296971d230a4e5f,
              mid_getField_2235cd056f5a882b,
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
