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
            mid_init$_7ae3461a92a43152,
            mid_getBeamDivergence_456d9a2f64d6b28d,
            mid_getLaserId_0090f7797e403f43,
            mid_getLaserType_0090f7797e403f43,
            mid_getNominalFireRate_456d9a2f64d6b28d,
            mid_getPrimaryWavelength_456d9a2f64d6b28d,
            mid_getPulseEnergy_456d9a2f64d6b28d,
            mid_getPulseInOutgoingSemiTrain_f2f64475e4580546,
            mid_getPulseWidth_456d9a2f64d6b28d,
            mid_setBeamDivergence_77e0f9a1f260e2e5,
            mid_setLaserId_e939c6558ae8d313,
            mid_setLaserType_e939c6558ae8d313,
            mid_setNominalFireRate_77e0f9a1f260e2e5,
            mid_setPrimaryWavelength_77e0f9a1f260e2e5,
            mid_setPulseEnergy_77e0f9a1f260e2e5,
            mid_setPulseInOutgoingSemiTrain_0a2a1ac2721c0336,
            mid_setPulseWidth_77e0f9a1f260e2e5,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
