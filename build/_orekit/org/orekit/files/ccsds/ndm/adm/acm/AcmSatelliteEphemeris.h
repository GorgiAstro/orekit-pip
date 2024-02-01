#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmSatelliteEphemeris_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmSatelliteEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeStateHistory;
            }
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              class AcmSatelliteEphemeris : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d6d7b1002c69c04a,
                  mid_getId_d2c8eb4129821f0e,
                  mid_getSegments_d751c1a57012b438,
                  mid_getStart_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmSatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmSatelliteEphemeris(const AcmSatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

                AcmSatelliteEphemeris(const ::java::lang::String &, const ::java::util::List &);

                ::java::lang::String getId() const;
                ::java::util::List getSegments() const;
                ::org::orekit::time::AbsoluteDate getStart() const;
                ::org::orekit::time::AbsoluteDate getStop() const;
              };
            }
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AcmSatelliteEphemeris);
              extern PyTypeObject *PY_TYPE(AcmSatelliteEphemeris);

              class t_AcmSatelliteEphemeris {
              public:
                PyObject_HEAD
                AcmSatelliteEphemeris object;
                static PyObject *wrap_Object(const AcmSatelliteEphemeris&);
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
}

#endif
