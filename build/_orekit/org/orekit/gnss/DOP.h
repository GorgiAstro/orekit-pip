#ifndef org_orekit_gnss_DOP_H
#define org_orekit_gnss_DOP_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
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
    namespace gnss {

      class DOP : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c5e983cb1d6a8b6c,
          mid_getDate_85703d13e302437e,
          mid_getGdop_dff5885c2c873297,
          mid_getGnssNb_570ce0828f81a2c1,
          mid_getHdop_dff5885c2c873297,
          mid_getLocation_82d0a9bcd06489bb,
          mid_getPdop_dff5885c2c873297,
          mid_getTdop_dff5885c2c873297,
          mid_getVdop_dff5885c2c873297,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DOP(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DOP(const DOP& obj) : ::java::lang::Object(obj) {}

        DOP(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::time::AbsoluteDate &, jint, jdouble, jdouble, jdouble, jdouble, jdouble);

        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getGdop() const;
        jint getGnssNb() const;
        jdouble getHdop() const;
        ::org::orekit::bodies::GeodeticPoint getLocation() const;
        jdouble getPdop() const;
        jdouble getTdop() const;
        jdouble getVdop() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(DOP);
      extern PyTypeObject *PY_TYPE(DOP);

      class t_DOP {
      public:
        PyObject_HEAD
        DOP object;
        static PyObject *wrap_Object(const DOP&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
