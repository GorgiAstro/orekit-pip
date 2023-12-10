#ifndef org_orekit_gnss_DOP_H
#define org_orekit_gnss_DOP_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class GeodeticPoint;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class DOP : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c39c0edb2fdf00ae,
          mid_getDate_aaa854c403487cf3,
          mid_getGdop_456d9a2f64d6b28d,
          mid_getGnssNb_f2f64475e4580546,
          mid_getHdop_456d9a2f64d6b28d,
          mid_getLocation_fabc97b1aefe5844,
          mid_getPdop_456d9a2f64d6b28d,
          mid_getTdop_456d9a2f64d6b28d,
          mid_getVdop_456d9a2f64d6b28d,
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
