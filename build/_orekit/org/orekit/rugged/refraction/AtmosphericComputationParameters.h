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
            mid_init$_a1fa5dae97ea5ed2,
            mid_configureCorrectionGrid_6998202d78aaf9b3,
            mid_getDefaultInverseLocMargin_b74f83833fdad017,
            mid_getInverseLocMargin_b74f83833fdad017,
            mid_getMaxLineSensor_b74f83833fdad017,
            mid_getMinLineSensor_b74f83833fdad017,
            mid_getNbLineGrid_55546ef6a647f39b,
            mid_getNbPixelGrid_55546ef6a647f39b,
            mid_getSensorName_1c1fa1e935d6cdcf,
            mid_getUgrid_25e1757a36c4dde2,
            mid_getVgrid_25e1757a36c4dde2,
            mid_setGridSteps_3313c75e3e16c428,
            mid_setInverseLocMargin_8ba9fe7a847cecad,
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
