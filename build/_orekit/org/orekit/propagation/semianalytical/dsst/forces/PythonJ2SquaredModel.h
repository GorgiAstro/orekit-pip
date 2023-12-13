#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonJ2SquaredModel_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonJ2SquaredModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class J2SquaredModel;
            class FieldDSSTJ2SquaredClosedFormContext;
            class DSSTJ2SquaredClosedFormContext;
          }
        }
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class PythonJ2SquaredModel : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_computeMeanEquinoctialSecondOrderTerms_9e21a8e72403ad02,
                mid_computeMeanEquinoctialSecondOrderTerms_4a156b883cf16de2,
                mid_finalize_a1fa5dae97ea5ed2,
                mid_pythonDecRef_a1fa5dae97ea5ed2,
                mid_pythonExtension_6c0ce7e438e5ded4,
                mid_pythonExtension_3d7dd2314a0dd456,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonJ2SquaredModel(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonJ2SquaredModel(const PythonJ2SquaredModel& obj) : ::java::lang::Object(obj) {}

              PythonJ2SquaredModel();

              JArray< jdouble > computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext &) const;
              void finalize() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(PythonJ2SquaredModel);
            extern PyTypeObject *PY_TYPE(PythonJ2SquaredModel);

            class t_PythonJ2SquaredModel {
            public:
              PyObject_HEAD
              PythonJ2SquaredModel object;
              static PyObject *wrap_Object(const PythonJ2SquaredModel&);
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
