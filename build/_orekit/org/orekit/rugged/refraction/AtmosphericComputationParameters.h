#ifndef org_orekit_rugged_refraction_AtmosphericComputationParameters_H
#define org_orekit_rugged_refraction_AtmosphericComputationParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class LineSensor;
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
    namespace rugged {
      namespace refraction {

        class AtmosphericComputationParameters : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_configureCorrectionGrid_75c5b898b43a4df8,
            mid_getDefaultInverseLocMargin_456d9a2f64d6b28d,
            mid_getInverseLocMargin_456d9a2f64d6b28d,
            mid_getMaxLineSensor_456d9a2f64d6b28d,
            mid_getMinLineSensor_456d9a2f64d6b28d,
            mid_getNbLineGrid_f2f64475e4580546,
            mid_getNbPixelGrid_f2f64475e4580546,
            mid_getSensorName_0090f7797e403f43,
            mid_getUgrid_7cdc325af0834901,
            mid_getVgrid_7cdc325af0834901,
            mid_setGridSteps_8dbc1129a3c2557a,
            mid_setInverseLocMargin_77e0f9a1f260e2e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AtmosphericComputationParameters(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AtmosphericComputationParameters(const AtmosphericComputationParameters& obj) : ::java::lang::Object(obj) {}

          AtmosphericComputationParameters();

          void configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor &, jint, jint) const;
          jdouble getDefaultInverseLocMargin() const;
          jdouble getInverseLocMargin() const;
          jdouble getMaxLineSensor() const;
          jdouble getMinLineSensor() const;
          jint getNbLineGrid() const;
          jint getNbPixelGrid() const;
          ::java::lang::String getSensorName() const;
          JArray< jdouble > getUgrid() const;
          JArray< jdouble > getVgrid() const;
          void setGridSteps(jint, jint) const;
          void setInverseLocMargin(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        extern PyType_Def PY_TYPE_DEF(AtmosphericComputationParameters);
        extern PyTypeObject *PY_TYPE(AtmosphericComputationParameters);

        class t_AtmosphericComputationParameters {
        public:
          PyObject_HEAD
          AtmosphericComputationParameters object;
          static PyObject *wrap_Object(const AtmosphericComputationParameters&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
