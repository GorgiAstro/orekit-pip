#ifndef org_orekit_files_ccsds_definitions_OrbitRelativeFrame_H
#define org_orekit_files_ccsds_definitions_OrbitRelativeFrame_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOFType;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OrbitRelativeFrame;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class OrbitRelativeFrame : public ::java::lang::Enum {
           public:
            enum {
              mid_getLofType_f183bcc89f4a1412,
              mid_isQuasiInertial_9ab94ac1dc23b105,
              mid_valueOf_ca9c0b65a5a10e81,
              mid_values_a251dbe84800b83c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrbitRelativeFrame(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrbitRelativeFrame(const OrbitRelativeFrame& obj) : ::java::lang::Enum(obj) {}

            static OrbitRelativeFrame *EQW_INERTIAL;
            static OrbitRelativeFrame *LVLH;
            static OrbitRelativeFrame *LVLH_INERTIAL;
            static OrbitRelativeFrame *LVLH_ROTATING;
            static OrbitRelativeFrame *NSW_INERTIAL;
            static OrbitRelativeFrame *NSW_ROTATING;
            static OrbitRelativeFrame *NTW_INERTIAL;
            static OrbitRelativeFrame *NTW_ROTATING;
            static OrbitRelativeFrame *PQW_INERTIAL;
            static OrbitRelativeFrame *QSW;
            static OrbitRelativeFrame *RIC;
            static OrbitRelativeFrame *RSW;
            static OrbitRelativeFrame *RSW_INERTIAL;
            static OrbitRelativeFrame *RSW_ROTATING;
            static OrbitRelativeFrame *RTN;
            static OrbitRelativeFrame *SEZ_INERTIAL;
            static OrbitRelativeFrame *SEZ_ROTATING;
            static OrbitRelativeFrame *TNW;
            static OrbitRelativeFrame *TNW_INERTIAL;
            static OrbitRelativeFrame *TNW_ROTATING;
            static OrbitRelativeFrame *VNC_INERTIAL;
            static OrbitRelativeFrame *VNC_ROTATING;

            ::org::orekit::frames::LOFType getLofType() const;
            jboolean isQuasiInertial() const;
            static OrbitRelativeFrame valueOf(const ::java::lang::String &);
            static JArray< OrbitRelativeFrame > values();
          };
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
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(OrbitRelativeFrame);
          extern PyTypeObject *PY_TYPE(OrbitRelativeFrame);

          class t_OrbitRelativeFrame {
          public:
            PyObject_HEAD
            OrbitRelativeFrame object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OrbitRelativeFrame *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OrbitRelativeFrame&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OrbitRelativeFrame&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
