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
            mid_init$_0fa09c18fee449d5,
            mid_configureCorrectionGrid_5bf94bc89b069b4b,
            mid_getDefaultInverseLocMargin_dff5885c2c873297,
            mid_getInverseLocMargin_dff5885c2c873297,
            mid_getMaxLineSensor_dff5885c2c873297,
            mid_getMinLineSensor_dff5885c2c873297,
            mid_getNbLineGrid_570ce0828f81a2c1,
            mid_getNbPixelGrid_570ce0828f81a2c1,
            mid_getSensorName_11b109bd155ca898,
            mid_getUgrid_60c7040667a7dc5c,
            mid_getVgrid_60c7040667a7dc5c,
            mid_setGridSteps_6f37635c3285dbdf,
            mid_setInverseLocMargin_17db3a65980d3441,
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
