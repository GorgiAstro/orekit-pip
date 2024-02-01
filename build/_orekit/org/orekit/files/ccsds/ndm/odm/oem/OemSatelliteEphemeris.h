#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemSatelliteEphemeris_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemSatelliteEphemeris_H

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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemSegment;
            }
          }
        }
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
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
            namespace oem {

              class OemSatelliteEphemeris : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_efa13fade9859f0d,
                  mid_getId_d2c8eb4129821f0e,
                  mid_getMu_9981f74b2d109da6,
                  mid_getSegments_d751c1a57012b438,
                  mid_getStart_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OemSatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemSatelliteEphemeris(const OemSatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

                OemSatelliteEphemeris(const ::java::lang::String &, jdouble, const ::java::util::List &);

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
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(OemSatelliteEphemeris);
              extern PyTypeObject *PY_TYPE(OemSatelliteEphemeris);

              class t_OemSatelliteEphemeris {
              public:
                PyObject_HEAD
                OemSatelliteEphemeris object;
                static PyObject *wrap_Object(const OemSatelliteEphemeris&);
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
