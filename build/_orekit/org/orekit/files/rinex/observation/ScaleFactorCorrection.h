#ifndef org_orekit_files_rinex_observation_ScaleFactorCorrection_H
#define org_orekit_files_rinex_observation_ScaleFactorCorrection_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class ObservationType;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          class ScaleFactorCorrection : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff4b669f0c231c8c,
              mid_getCorrection_b74f83833fdad017,
              mid_getTypesObsScaled_e62d3bb06d56d7e3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScaleFactorCorrection(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScaleFactorCorrection(const ScaleFactorCorrection& obj) : ::java::lang::Object(obj) {}

            ScaleFactorCorrection(jdouble, const ::java::util::List &);

            jdouble getCorrection() const;
            ::java::util::List getTypesObsScaled() const;
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
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(ScaleFactorCorrection);
          extern PyTypeObject *PY_TYPE(ScaleFactorCorrection);

          class t_ScaleFactorCorrection {
          public:
            PyObject_HEAD
            ScaleFactorCorrection object;
            static PyObject *wrap_Object(const ScaleFactorCorrection&);
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
