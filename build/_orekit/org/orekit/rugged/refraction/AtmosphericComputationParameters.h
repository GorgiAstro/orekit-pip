#ifndef org_orekit_rugged_refraction_AtmosphericComputationParameters_H
#define org_orekit_rugged_refraction_AtmosphericComputationParameters_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class LineSensor;
      }
    }
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
            mid_init$_0640e6acf969ed28,
            mid_configureCorrectionGrid_03c83376fa653679,
            mid_getDefaultInverseLocMargin_557b8123390d8d0c,
            mid_getInverseLocMargin_557b8123390d8d0c,
            mid_getMaxLineSensor_557b8123390d8d0c,
            mid_getMinLineSensor_557b8123390d8d0c,
            mid_getNbLineGrid_412668abc8d889e9,
            mid_getNbPixelGrid_412668abc8d889e9,
            mid_getSensorName_3cffd47377eca18a,
            mid_getUgrid_a53a7513ecedada2,
            mid_getVgrid_a53a7513ecedada2,
            mid_setGridSteps_a84c9a223722150c,
            mid_setInverseLocMargin_10f281d777284cea,
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
