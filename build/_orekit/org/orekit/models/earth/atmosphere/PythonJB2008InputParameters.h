#ifndef org_orekit_models_earth_atmosphere_PythonJB2008InputParameters_H
#define org_orekit_models_earth_atmosphere_PythonJB2008InputParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          class JB2008InputParameters;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          class PythonJB2008InputParameters : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getDSTDTC_b0b988f941da47d8,
              mid_getF10_b0b988f941da47d8,
              mid_getF10B_b0b988f941da47d8,
              mid_getMaxDate_7a97f7e149e79afb,
              mid_getMinDate_7a97f7e149e79afb,
              mid_getS10_b0b988f941da47d8,
              mid_getS10B_b0b988f941da47d8,
              mid_getXM10_b0b988f941da47d8,
              mid_getXM10B_b0b988f941da47d8,
              mid_getY10_b0b988f941da47d8,
              mid_getY10B_b0b988f941da47d8,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonJB2008InputParameters(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonJB2008InputParameters(const PythonJB2008InputParameters& obj) : ::java::lang::Object(obj) {}

            PythonJB2008InputParameters();

            void finalize() const;
            jdouble getDSTDTC(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getF10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getF10B(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::time::AbsoluteDate getMaxDate() const;
            ::org::orekit::time::AbsoluteDate getMinDate() const;
            jdouble getS10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getS10B(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getXM10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getXM10B(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getY10(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getY10B(const ::org::orekit::time::AbsoluteDate &) const;
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(PythonJB2008InputParameters);
          extern PyTypeObject *PY_TYPE(PythonJB2008InputParameters);

          class t_PythonJB2008InputParameters {
          public:
            PyObject_HEAD
            PythonJB2008InputParameters object;
            static PyObject *wrap_Object(const PythonJB2008InputParameters&);
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
