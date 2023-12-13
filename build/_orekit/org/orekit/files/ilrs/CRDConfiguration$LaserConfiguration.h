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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getBeamDivergence_b74f83833fdad017,
            mid_getLaserId_1c1fa1e935d6cdcf,
            mid_getLaserType_1c1fa1e935d6cdcf,
            mid_getNominalFireRate_b74f83833fdad017,
            mid_getPrimaryWavelength_b74f83833fdad017,
            mid_getPulseEnergy_b74f83833fdad017,
            mid_getPulseInOutgoingSemiTrain_55546ef6a647f39b,
            mid_getPulseWidth_b74f83833fdad017,
            mid_setBeamDivergence_8ba9fe7a847cecad,
            mid_setLaserId_734b91ac30d5f9b4,
            mid_setLaserType_734b91ac30d5f9b4,
            mid_setNominalFireRate_8ba9fe7a847cecad,
            mid_setPrimaryWavelength_8ba9fe7a847cecad,
            mid_setPulseEnergy_8ba9fe7a847cecad,
            mid_setPulseInOutgoingSemiTrain_44ed599e93e8a30c,
            mid_setPulseWidth_8ba9fe7a847cecad,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
