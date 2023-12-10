#ifndef org_orekit_files_ccsds_ndm_odm_KeplerianElements_H
#define org_orekit_files_ccsds_ndm_odm_KeplerianElements_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Data;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class KeplerianOrbit;
      class PositionAngleType;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class KeplerianElements : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_generateKeplerianOrbit_0666bdaaaf07ecac,
                mid_getA_456d9a2f64d6b28d,
                mid_getAnomaly_456d9a2f64d6b28d,
                mid_getAnomalyType_2571e8fe1cede425,
                mid_getE_456d9a2f64d6b28d,
                mid_getEpoch_aaa854c403487cf3,
                mid_getI_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getMu_456d9a2f64d6b28d,
                mid_getPa_456d9a2f64d6b28d,
                mid_getRaan_456d9a2f64d6b28d,
                mid_setA_77e0f9a1f260e2e5,
                mid_setAnomaly_77e0f9a1f260e2e5,
                mid_setAnomalyType_07350e8db766ef51,
                mid_setE_77e0f9a1f260e2e5,
                mid_setEpoch_e82d68cd9f886886,
                mid_setI_77e0f9a1f260e2e5,
                mid_setMeanMotion_77e0f9a1f260e2e5,
                mid_setMu_77e0f9a1f260e2e5,
                mid_setPa_77e0f9a1f260e2e5,
                mid_setRaan_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KeplerianElements(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KeplerianElements(const KeplerianElements& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              KeplerianElements();

              ::org::orekit::orbits::KeplerianOrbit generateKeplerianOrbit(const ::org::orekit::frames::Frame &) const;
              jdouble getA() const;
              jdouble getAnomaly() const;
              ::org::orekit::orbits::PositionAngleType getAnomalyType() const;
              jdouble getE() const;
              ::org::orekit::time::AbsoluteDate getEpoch() const;
              jdouble getI() const;
              jdouble getMeanMotion() const;
              jdouble getMu() const;
              jdouble getPa() const;
              jdouble getRaan() const;
              void setA(jdouble) const;
              void setAnomaly(jdouble) const;
              void setAnomalyType(const ::org::orekit::orbits::PositionAngleType &) const;
              void setE(jdouble) const;
              void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setI(jdouble) const;
              void setMeanMotion(jdouble) const;
              void setMu(jdouble) const;
              void setPa(jdouble) const;
              void setRaan(jdouble) const;
              void validate(jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(KeplerianElements);
            extern PyTypeObject *PY_TYPE(KeplerianElements);

            class t_KeplerianElements {
            public:
              PyObject_HEAD
              KeplerianElements object;
              static PyObject *wrap_Object(const KeplerianElements&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
