#ifndef org_orekit_files_sinex_Station$ReferenceSystem_H
#define org_orekit_files_sinex_Station$ReferenceSystem_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        class Station$ReferenceSystem;
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
      namespace sinex {

        class Station$ReferenceSystem : public ::java::lang::Enum {
         public:
          enum {
            mid_getEccRefSystem_598a51d5a149f1f8,
            mid_getName_11b109bd155ca898,
            mid_valueOf_598a51d5a149f1f8,
            mid_values_b86ae42ecff54fe1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Station$ReferenceSystem(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Station$ReferenceSystem(const Station$ReferenceSystem& obj) : ::java::lang::Enum(obj) {}

          static Station$ReferenceSystem *UNE;
          static Station$ReferenceSystem *XYZ;

          static Station$ReferenceSystem getEccRefSystem(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static Station$ReferenceSystem valueOf(const ::java::lang::String &);
          static JArray< Station$ReferenceSystem > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(Station$ReferenceSystem);
        extern PyTypeObject *PY_TYPE(Station$ReferenceSystem);

        class t_Station$ReferenceSystem {
        public:
          PyObject_HEAD
          Station$ReferenceSystem object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Station$ReferenceSystem *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Station$ReferenceSystem&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Station$ReferenceSystem&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
