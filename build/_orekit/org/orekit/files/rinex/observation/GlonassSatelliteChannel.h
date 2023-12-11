#ifndef org_orekit_files_rinex_observation_GlonassSatelliteChannel_H
#define org_orekit_files_rinex_observation_GlonassSatelliteChannel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SatInSystem;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          class GlonassSatelliteChannel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7982d9350a733031,
              mid_getK_412668abc8d889e9,
              mid_getSatellite_c5291c85b38fda6b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GlonassSatelliteChannel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GlonassSatelliteChannel(const GlonassSatelliteChannel& obj) : ::java::lang::Object(obj) {}

            GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem &, jint);

            jint getK() const;
            ::org::orekit::gnss::SatInSystem getSatellite() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(GlonassSatelliteChannel);
          extern PyTypeObject *PY_TYPE(GlonassSatelliteChannel);

          class t_GlonassSatelliteChannel {
          public:
            PyObject_HEAD
            GlonassSatelliteChannel object;
            static PyObject *wrap_Object(const GlonassSatelliteChannel&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
