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
            mid_init$_ff7cb6c242604316,
            mid_configureCorrectionGrid_bb9ef741884b06c3,
            mid_getDefaultInverseLocMargin_9981f74b2d109da6,
            mid_getInverseLocMargin_9981f74b2d109da6,
            mid_getMaxLineSensor_9981f74b2d109da6,
            mid_getMinLineSensor_9981f74b2d109da6,
            mid_getNbLineGrid_d6ab429752e7c267,
            mid_getNbPixelGrid_d6ab429752e7c267,
            mid_getSensorName_d2c8eb4129821f0e,
            mid_getUgrid_be783177b060994b,
            mid_getVgrid_be783177b060994b,
            mid_setGridSteps_b5d23e6c0858e8ed,
            mid_setInverseLocMargin_1ad26e8c8c0cd65b,
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
