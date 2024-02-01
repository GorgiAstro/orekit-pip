#ifndef org_orekit_files_sp3_SP3Ephemeris_H
#define org_orekit_files_sp3_SP3Ephemeris_H

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
      class CartesianDerivativesFilter;
    }
    namespace files {
      namespace sp3 {
        class SP3Coordinate;
        class SP3Segment;
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace frames {
      class Frame;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Ephemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_37ff8a5fdc395935,
            mid_addCoordinate_36568d3d88672861,
            mid_getAvailableDerivatives_b9dfc27d8c56b5de,
            mid_getFrame_cb151471db4570f0,
            mid_getId_d2c8eb4129821f0e,
            mid_getInterpolationSamples_d6ab429752e7c267,
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

          explicit SP3Ephemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Ephemeris(const SP3Ephemeris& obj) : ::java::lang::Object(obj) {}

          SP3Ephemeris(const ::java::lang::String &, jdouble, const ::org::orekit::frames::Frame &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &);

          void addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate &, jdouble) const;
          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::java::lang::String getId() const;
          jint getInterpolationSamples() const;
          jdouble getMu() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Ephemeris);
        extern PyTypeObject *PY_TYPE(SP3Ephemeris);

        class t_SP3Ephemeris {
        public:
          PyObject_HEAD
          SP3Ephemeris object;
          static PyObject *wrap_Object(const SP3Ephemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
