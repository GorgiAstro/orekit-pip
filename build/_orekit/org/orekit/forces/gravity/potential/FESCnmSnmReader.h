#ifndef org_orekit_forces_gravity_potential_FESCnmSnmReader_H
#define org_orekit_forces_gravity_potential_FESCnmSnmReader_H

#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class FESCnmSnmReader : public ::org::orekit::forces::gravity::potential::OceanTidesReader {
           public:
            enum {
              mid_init$_b7ec643e4edd96c5,
              mid_loadData_360461e719fb564c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FESCnmSnmReader(jobject obj) : ::org::orekit::forces::gravity::potential::OceanTidesReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FESCnmSnmReader(const FESCnmSnmReader& obj) : ::org::orekit::forces::gravity::potential::OceanTidesReader(obj) {}

            FESCnmSnmReader(const ::java::lang::String &, jdouble);

            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(FESCnmSnmReader);
          extern PyTypeObject *PY_TYPE(FESCnmSnmReader);

          class t_FESCnmSnmReader {
          public:
            PyObject_HEAD
            FESCnmSnmReader object;
            static PyObject *wrap_Object(const FESCnmSnmReader&);
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
