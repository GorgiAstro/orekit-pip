#ifndef org_orekit_bodies_PythonCelestialBodies_H
#define org_orekit_bodies_PythonCelestialBodies_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
      class CelestialBodies;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class PythonCelestialBodies : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getBody_29f199e59c05cc68,
          mid_getEarth_798caa59db6076aa,
          mid_getEarthMoonBarycenter_798caa59db6076aa,
          mid_getJupiter_798caa59db6076aa,
          mid_getMars_798caa59db6076aa,
          mid_getMercury_798caa59db6076aa,
          mid_getMoon_798caa59db6076aa,
          mid_getNeptune_798caa59db6076aa,
          mid_getPluto_798caa59db6076aa,
          mid_getSaturn_798caa59db6076aa,
          mid_getSolarSystemBarycenter_798caa59db6076aa,
          mid_getSun_798caa59db6076aa,
          mid_getUranus_798caa59db6076aa,
          mid_getVenus_798caa59db6076aa,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonCelestialBodies(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonCelestialBodies(const PythonCelestialBodies& obj) : ::java::lang::Object(obj) {}

        PythonCelestialBodies();

        void finalize() const;
        ::org::orekit::bodies::CelestialBody getBody(const ::java::lang::String &) const;
        ::org::orekit::bodies::CelestialBody getEarth() const;
        ::org::orekit::bodies::CelestialBody getEarthMoonBarycenter() const;
        ::org::orekit::bodies::CelestialBody getJupiter() const;
        ::org::orekit::bodies::CelestialBody getMars() const;
        ::org::orekit::bodies::CelestialBody getMercury() const;
        ::org::orekit::bodies::CelestialBody getMoon() const;
        ::org::orekit::bodies::CelestialBody getNeptune() const;
        ::org::orekit::bodies::CelestialBody getPluto() const;
        ::org::orekit::bodies::CelestialBody getSaturn() const;
        ::org::orekit::bodies::CelestialBody getSolarSystemBarycenter() const;
        ::org::orekit::bodies::CelestialBody getSun() const;
        ::org::orekit::bodies::CelestialBody getUranus() const;
        ::org::orekit::bodies::CelestialBody getVenus() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(PythonCelestialBodies);
      extern PyTypeObject *PY_TYPE(PythonCelestialBodies);

      class t_PythonCelestialBodies {
      public:
        PyObject_HEAD
        PythonCelestialBodies object;
        static PyObject *wrap_Object(const PythonCelestialBodies&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
