#ifndef org_orekit_files_stk_STKEphemerisFile$STKCoordinateSystem_H
#define org_orekit_files_stk_STKEphemerisFile$STKCoordinateSystem_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        class STKEphemerisFile$STKCoordinateSystem;
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
      namespace stk {

        class STKEphemerisFile$STKCoordinateSystem : public ::java::lang::Enum {
         public:
          enum {
            mid_parse_6a887e7a37bc4ab5,
            mid_valueOf_6a887e7a37bc4ab5,
            mid_values_eb575a4796ee9b48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit STKEphemerisFile$STKCoordinateSystem(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          STKEphemerisFile$STKCoordinateSystem(const STKEphemerisFile$STKCoordinateSystem& obj) : ::java::lang::Enum(obj) {}

          static STKEphemerisFile$STKCoordinateSystem *FIXED;
          static STKEphemerisFile$STKCoordinateSystem *ICRF;
          static STKEphemerisFile$STKCoordinateSystem *INERTIAL;
          static STKEphemerisFile$STKCoordinateSystem *J2000;
          static STKEphemerisFile$STKCoordinateSystem *MEAN_OF_DATE;
          static STKEphemerisFile$STKCoordinateSystem *TEME_OF_DATE;
          static STKEphemerisFile$STKCoordinateSystem *TRUE_OF_DATE;

          static STKEphemerisFile$STKCoordinateSystem parse(const ::java::lang::String &);
          static STKEphemerisFile$STKCoordinateSystem valueOf(const ::java::lang::String &);
          static JArray< STKEphemerisFile$STKCoordinateSystem > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        extern PyType_Def PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem);
        extern PyTypeObject *PY_TYPE(STKEphemerisFile$STKCoordinateSystem);

        class t_STKEphemerisFile$STKCoordinateSystem {
        public:
          PyObject_HEAD
          STKEphemerisFile$STKCoordinateSystem object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_STKEphemerisFile$STKCoordinateSystem *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const STKEphemerisFile$STKCoordinateSystem&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const STKEphemerisFile$STKCoordinateSystem&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
