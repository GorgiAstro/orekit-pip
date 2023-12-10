#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemSatelliteEphemeris_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemSatelliteEphemeris_H

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
    namespace utils {
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemSegment;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class AemSatelliteEphemeris : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_91fd4e71827f714e,
                  mid_getId_11b109bd155ca898,
                  mid_getSegments_2afa36052df4765d,
                  mid_getStart_85703d13e302437e,
                  mid_getStop_85703d13e302437e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemSatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemSatelliteEphemeris(const AemSatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

                AemSatelliteEphemeris(const ::java::lang::String &, const ::java::util::List &);

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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemSatelliteEphemeris);
              extern PyTypeObject *PY_TYPE(AemSatelliteEphemeris);

              class t_AemSatelliteEphemeris {
              public:
                PyObject_HEAD
                AemSatelliteEphemeris object;
                static PyObject *wrap_Object(const AemSatelliteEphemeris&);
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
