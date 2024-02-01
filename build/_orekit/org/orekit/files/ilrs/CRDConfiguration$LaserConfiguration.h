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
            mid_init$_ff7cb6c242604316,
            mid_getBeamDivergence_9981f74b2d109da6,
            mid_getLaserId_d2c8eb4129821f0e,
            mid_getLaserType_d2c8eb4129821f0e,
            mid_getNominalFireRate_9981f74b2d109da6,
            mid_getPrimaryWavelength_9981f74b2d109da6,
            mid_getPulseEnergy_9981f74b2d109da6,
            mid_getPulseInOutgoingSemiTrain_d6ab429752e7c267,
            mid_getPulseWidth_9981f74b2d109da6,
            mid_setBeamDivergence_1ad26e8c8c0cd65b,
            mid_setLaserId_105e1eadb709d9ac,
            mid_setLaserType_105e1eadb709d9ac,
            mid_setNominalFireRate_1ad26e8c8c0cd65b,
            mid_setPrimaryWavelength_1ad26e8c8c0cd65b,
            mid_setPulseEnergy_1ad26e8c8c0cd65b,
            mid_setPulseInOutgoingSemiTrain_8fd427ab23829bf5,
            mid_setPulseWidth_1ad26e8c8c0cd65b,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
