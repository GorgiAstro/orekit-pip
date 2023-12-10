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
      class PositionAngleType;
      class KeplerianOrbit;
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
                mid_init$_0fa09c18fee449d5,
                mid_generateKeplerianOrbit_e3485a84a747fc7f,
                mid_getA_dff5885c2c873297,
                mid_getAnomaly_dff5885c2c873297,
                mid_getAnomalyType_8f17e83e5a86217c,
                mid_getE_dff5885c2c873297,
                mid_getEpoch_85703d13e302437e,
                mid_getI_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getMu_dff5885c2c873297,
                mid_getPa_dff5885c2c873297,
                mid_getRaan_dff5885c2c873297,
                mid_setA_17db3a65980d3441,
                mid_setAnomaly_17db3a65980d3441,
                mid_setAnomalyType_4ca1644ed7c72fe3,
                mid_setE_17db3a65980d3441,
                mid_setEpoch_600a2a61652bc473,
                mid_setI_17db3a65980d3441,
                mid_setMeanMotion_17db3a65980d3441,
                mid_setMu_17db3a65980d3441,
                mid_setPa_17db3a65980d3441,
                mid_setRaan_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
