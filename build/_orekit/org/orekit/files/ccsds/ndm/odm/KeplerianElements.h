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
    namespace orbits {
      class KeplerianOrbit;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_generateKeplerianOrbit_be281caa27adec1e,
                mid_getA_b74f83833fdad017,
                mid_getAnomaly_b74f83833fdad017,
                mid_getAnomalyType_c25055891f180348,
                mid_getE_b74f83833fdad017,
                mid_getEpoch_c325492395d89b24,
                mid_getI_b74f83833fdad017,
                mid_getMeanMotion_b74f83833fdad017,
                mid_getMu_b74f83833fdad017,
                mid_getPa_b74f83833fdad017,
                mid_getRaan_b74f83833fdad017,
                mid_setA_8ba9fe7a847cecad,
                mid_setAnomaly_8ba9fe7a847cecad,
                mid_setAnomalyType_778d09854443b806,
                mid_setE_8ba9fe7a847cecad,
                mid_setEpoch_02135a6ef25adb4b,
                mid_setI_8ba9fe7a847cecad,
                mid_setMeanMotion_8ba9fe7a847cecad,
                mid_setMu_8ba9fe7a847cecad,
                mid_setPa_8ba9fe7a847cecad,
                mid_setRaan_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
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
