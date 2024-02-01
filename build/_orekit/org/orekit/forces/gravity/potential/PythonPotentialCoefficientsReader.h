#ifndef org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H

#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace text {
    class ParseException;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
    namespace errors {
      class OrekitException;
    }
    namespace time {
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonPotentialCoefficientsReader : public ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader {
           public:
            enum {
              mid_init$_c5d48f261709aa3e,
              mid_init$_13b6194a2a01ad07,
              mid_finalize_ff7cb6c242604316,
              mid_getProvider_0c94c2344ee8a0fa,
              mid_loadData_bec0f846e5ec73da,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonPotentialCoefficientsReader(jobject obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonPotentialCoefficientsReader(const PythonPotentialCoefficientsReader& obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {}

            PythonPotentialCoefficientsReader(const ::java::lang::String &, jboolean);
            PythonPotentialCoefficientsReader(const ::java::lang::String &, jboolean, const ::org::orekit::time::TimeScale &);

            void finalize() const;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonPotentialCoefficientsReader);
          extern PyTypeObject *PY_TYPE(PythonPotentialCoefficientsReader);

          class t_PythonPotentialCoefficientsReader {
          public:
            PyObject_HEAD
            PythonPotentialCoefficientsReader object;
            static PyObject *wrap_Object(const PythonPotentialCoefficientsReader&);
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
