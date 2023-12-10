#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmSatelliteEphemeris_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmSatelliteEphemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class TrajectoryStateHistory;
            }
          }
        }
      }
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class OcmSatelliteEphemeris : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d0a6ea578b35c45e,
                  mid_getId_0090f7797e403f43,
                  mid_getMu_456d9a2f64d6b28d,
                  mid_getSegments_a6156df500549a58,
                  mid_getStart_aaa854c403487cf3,
                  mid_getStop_aaa854c403487cf3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmSatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmSatelliteEphemeris(const OcmSatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

                OcmSatelliteEphemeris(const ::java::lang::String &, jdouble, const ::java::util::List &);

                ::java::lang::String getId() const;
                jdouble getMu() const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OcmSatelliteEphemeris);
              extern PyTypeObject *PY_TYPE(OcmSatelliteEphemeris);

              class t_OcmSatelliteEphemeris {
              public:
                PyObject_HEAD
                OcmSatelliteEphemeris object;
                static PyObject *wrap_Object(const OcmSatelliteEphemeris&);
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
