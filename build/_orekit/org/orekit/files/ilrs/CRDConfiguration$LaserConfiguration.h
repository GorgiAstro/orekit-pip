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
            mid_init$_0640e6acf969ed28,
            mid_getBeamDivergence_557b8123390d8d0c,
            mid_getLaserId_3cffd47377eca18a,
            mid_getLaserType_3cffd47377eca18a,
            mid_getNominalFireRate_557b8123390d8d0c,
            mid_getPrimaryWavelength_557b8123390d8d0c,
            mid_getPulseEnergy_557b8123390d8d0c,
            mid_getPulseInOutgoingSemiTrain_412668abc8d889e9,
            mid_getPulseWidth_557b8123390d8d0c,
            mid_setBeamDivergence_10f281d777284cea,
            mid_setLaserId_f5ffdf29129ef90a,
            mid_setLaserType_f5ffdf29129ef90a,
            mid_setNominalFireRate_10f281d777284cea,
            mid_setPrimaryWavelength_10f281d777284cea,
            mid_setPulseEnergy_10f281d777284cea,
            mid_setPulseInOutgoingSemiTrain_a3da1a935cb37f7b,
            mid_setPulseWidth_10f281d777284cea,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
