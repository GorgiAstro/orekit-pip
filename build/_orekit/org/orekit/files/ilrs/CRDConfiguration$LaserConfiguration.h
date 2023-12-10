#ifndef org_orekit_files_ilrs_CRDConfiguration$LaserConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$LaserConfiguration_H

#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRDConfiguration$LaserConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_getBeamDivergence_dff5885c2c873297,
            mid_getLaserId_11b109bd155ca898,
            mid_getLaserType_11b109bd155ca898,
            mid_getNominalFireRate_dff5885c2c873297,
            mid_getPrimaryWavelength_dff5885c2c873297,
            mid_getPulseEnergy_dff5885c2c873297,
            mid_getPulseInOutgoingSemiTrain_570ce0828f81a2c1,
            mid_getPulseWidth_dff5885c2c873297,
            mid_setBeamDivergence_17db3a65980d3441,
            mid_setLaserId_d0bc48d5b00dc40c,
            mid_setLaserType_d0bc48d5b00dc40c,
            mid_setNominalFireRate_17db3a65980d3441,
            mid_setPrimaryWavelength_17db3a65980d3441,
            mid_setPulseEnergy_17db3a65980d3441,
            mid_setPulseInOutgoingSemiTrain_99803b0791f320ff,
            mid_setPulseWidth_17db3a65980d3441,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$LaserConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$LaserConfiguration(const CRDConfiguration$LaserConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$LaserConfiguration();

          jdouble getBeamDivergence() const;
          ::java::lang::String getLaserId() const;
          ::java::lang::String getLaserType() const;
          jdouble getNominalFireRate() const;
          jdouble getPrimaryWavelength() const;
          jdouble getPulseEnergy() const;
          jint getPulseInOutgoingSemiTrain() const;
          jdouble getPulseWidth() const;
          void setBeamDivergence(jdouble) const;
          void setLaserId(const ::java::lang::String &) const;
          void setLaserType(const ::java::lang::String &) const;
          void setNominalFireRate(jdouble) const;
          void setPrimaryWavelength(jdouble) const;
          void setPulseEnergy(jdouble) const;
          void setPulseInOutgoingSemiTrain(jint) const;
          void setPulseWidth(jdouble) const;
          ::java::lang::String toCrdString() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$LaserConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$LaserConfiguration);

        class t_CRDConfiguration$LaserConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$LaserConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$LaserConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
