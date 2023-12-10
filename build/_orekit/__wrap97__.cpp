#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUpFactory::class$ = NULL;
          jmethodID *WindUpFactory::mids$ = NULL;
          bool WindUpFactory::live$ = false;

          jclass WindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_249028a5e19cdc74] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/WindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WindUpFactory::WindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::orekit::estimation::measurements::gnss::WindUp WindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::estimation::measurements::gnss::WindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_249028a5e19cdc74], a0.this$, a1, a2.this$, a3.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args);

          static PyMethodDef t_WindUpFactory__methods_[] = {
            DECLARE_METHOD(t_WindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUpFactory)[] = {
            { Py_tp_methods, t_WindUpFactory__methods_ },
            { Py_tp_init, (void *) t_WindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WindUpFactory, t_WindUpFactory, WindUpFactory);

          void t_WindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUpFactory), &PY_TYPE_DEF(WindUpFactory), module, "WindUpFactory", 0);
          }

          void t_WindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "class_", make_descriptor(WindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "wrapfn_", make_descriptor(t_WindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUpFactory::initializeClass, 1)))
              return NULL;
            return t_WindUpFactory::wrap_Object(WindUpFactory(((t_WindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            WindUpFactory object((jobject) NULL);

            INT_CALL(object = WindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::WindUp result((jobject) NULL);

            if (!parseArgs(args, "KIks", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::gnss::t_WindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposer::class$ = NULL;
      jmethodID *SingularValueDecomposer::mids$ = NULL;
      bool SingularValueDecomposer::live$ = false;

      jclass SingularValueDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_decompose_4196bcb69ccaa8a4] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposer::SingularValueDecomposer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_4196bcb69ccaa8a4], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg);

      static PyMethodDef t_SingularValueDecomposer__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposer)[] = {
        { Py_tp_methods, t_SingularValueDecomposer__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposer, t_SingularValueDecomposer, SingularValueDecomposer);

      void t_SingularValueDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposer), &PY_TYPE_DEF(SingularValueDecomposer), module, "SingularValueDecomposer", 0);
      }

      void t_SingularValueDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "class_", make_descriptor(SingularValueDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "wrapfn_", make_descriptor(t_SingularValueDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposer::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposer::wrap_Object(SingularValueDecomposer(((t_SingularValueDecomposer *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds)
      {
        SingularValueDecomposer object((jobject) NULL);

        INT_CALL(object = SingularValueDecomposer());
        self->object = object;

        return 0;
      }

      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombinationFactory::class$ = NULL;
          jmethodID *MeasurementCombinationFactory::mids$ = NULL;
          bool MeasurementCombinationFactory::live$ = false;

          jclass MeasurementCombinationFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getGRAPHICCombination_979ce7b43d1b2c80] = env->getStaticMethodID(cls, "getGRAPHICCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GRAPHICCombination;");
              mids$[mid_getGeometryFreeCombination_a2abfffa847f5fff] = env->getStaticMethodID(cls, "getGeometryFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GeometryFreeCombination;");
              mids$[mid_getIonosphereFreeCombination_9f9496c58dd1dc9e] = env->getStaticMethodID(cls, "getIonosphereFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/IonosphereFreeCombination;");
              mids$[mid_getMelbourneWubbenaCombination_03477675e9c07cf5] = env->getStaticMethodID(cls, "getMelbourneWubbenaCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination;");
              mids$[mid_getNarrowLaneCombination_8d190c6f7f1e4307] = env->getStaticMethodID(cls, "getNarrowLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/NarrowLaneCombination;");
              mids$[mid_getPhaseMinusCodeCombination_d4fcb8d3a08c75c7] = env->getStaticMethodID(cls, "getPhaseMinusCodeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination;");
              mids$[mid_getWideLaneCombination_37a6597594b2dcf4] = env->getStaticMethodID(cls, "getWideLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/WideLaneCombination;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::GRAPHICCombination MeasurementCombinationFactory::getGRAPHICCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GRAPHICCombination(env->callStaticObjectMethod(cls, mids$[mid_getGRAPHICCombination_979ce7b43d1b2c80], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination MeasurementCombinationFactory::getGeometryFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getGeometryFreeCombination_a2abfffa847f5fff], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination MeasurementCombinationFactory::getIonosphereFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getIonosphereFreeCombination_9f9496c58dd1dc9e], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination MeasurementCombinationFactory::getMelbourneWubbenaCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination(env->callStaticObjectMethod(cls, mids$[mid_getMelbourneWubbenaCombination_03477675e9c07cf5], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination MeasurementCombinationFactory::getNarrowLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getNarrowLaneCombination_8d190c6f7f1e4307], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination MeasurementCombinationFactory::getPhaseMinusCodeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination(env->callStaticObjectMethod(cls, mids$[mid_getPhaseMinusCodeCombination_d4fcb8d3a08c75c7], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::WideLaneCombination MeasurementCombinationFactory::getWideLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::WideLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getWideLaneCombination_37a6597594b2dcf4], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_MeasurementCombinationFactory__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombinationFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGRAPHICCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGeometryFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getIonosphereFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getMelbourneWubbenaCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getNarrowLaneCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getPhaseMinusCodeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getWideLaneCombination, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombinationFactory)[] = {
            { Py_tp_methods, t_MeasurementCombinationFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombinationFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombinationFactory, t_MeasurementCombinationFactory, MeasurementCombinationFactory);

          void t_MeasurementCombinationFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombinationFactory), &PY_TYPE_DEF(MeasurementCombinationFactory), module, "MeasurementCombinationFactory", 0);
          }

          void t_MeasurementCombinationFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "class_", make_descriptor(MeasurementCombinationFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "wrapfn_", make_descriptor(t_MeasurementCombinationFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombinationFactory::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombinationFactory::wrap_Object(MeasurementCombinationFactory(((t_MeasurementCombinationFactory *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombinationFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GRAPHICCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGRAPHICCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GRAPHICCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGRAPHICCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGeometryFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GeometryFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGeometryFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getIonosphereFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IonosphereFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIonosphereFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getMelbourneWubbenaCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_MelbourneWubbenaCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMelbourneWubbenaCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getNarrowLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_NarrowLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNarrowLaneCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getPhaseMinusCodeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_PhaseMinusCodeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPhaseMinusCodeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::WideLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getWideLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_WideLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getWideLaneCombination", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCombination::class$ = NULL;
          jmethodID *GeometryFreeCombination::mids$ = NULL;
          bool GeometryFreeCombination::live$ = false;

          jclass GeometryFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_17aea80d13f83b81] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_f4c99548ccdd1967] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GeometryFreeCombination__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCombination)[] = {
            { Py_tp_methods, t_GeometryFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCombination, t_GeometryFreeCombination, GeometryFreeCombination);

          void t_GeometryFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCombination), &PY_TYPE_DEF(GeometryFreeCombination), module, "GeometryFreeCombination", 0);
          }

          void t_GeometryFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "class_", make_descriptor(GeometryFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "wrapfn_", make_descriptor(t_GeometryFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCombination::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCombination::wrap_Object(GeometryFreeCombination(((t_GeometryFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *QZSSScale::class$ = NULL;
      jmethodID *QZSSScale::mids$ = NULL;
      bool QZSSScale::live$ = false;

      jclass QZSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/QZSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String QZSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble QZSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement QZSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble QZSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String QZSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_getName(t_QZSSScale *self);
      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data);
      static PyGetSetDef t_QZSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_QZSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QZSSScale__methods_[] = {
        DECLARE_METHOD(t_QZSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_QZSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QZSSScale)[] = {
        { Py_tp_methods, t_QZSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_QZSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QZSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QZSSScale, t_QZSSScale, QZSSScale);

      void t_QZSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(QZSSScale), &PY_TYPE_DEF(QZSSScale), module, "QZSSScale", 0);
      }

      void t_QZSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "class_", make_descriptor(QZSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "wrapfn_", make_descriptor(t_QZSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QZSSScale::initializeClass, 1)))
          return NULL;
        return t_QZSSScale::wrap_Object(QZSSScale(((t_QZSSScale *) arg)->object.this$));
      }
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QZSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_QZSSScale_getName(t_QZSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(QZSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tan::class$ = NULL;
        jmethodID *Tan::mids$ = NULL;
        bool Tan::live$ = false;

        jclass Tan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tan::Tan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Tan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tan_value(t_Tan *self, PyObject *args);

        static PyMethodDef t_Tan__methods_[] = {
          DECLARE_METHOD(t_Tan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tan)[] = {
          { Py_tp_methods, t_Tan__methods_ },
          { Py_tp_init, (void *) t_Tan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tan, t_Tan, Tan);

        void t_Tan::install(PyObject *module)
        {
          installType(&PY_TYPE(Tan), &PY_TYPE_DEF(Tan), module, "Tan", 0);
        }

        void t_Tan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "class_", make_descriptor(Tan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "wrapfn_", make_descriptor(t_Tan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tan::initializeClass, 1)))
            return NULL;
          return t_Tan::wrap_Object(Tan(((t_Tan *) arg)->object.this$));
        }
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds)
        {
          Tan object((jobject) NULL);

          INT_CALL(object = Tan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tan_value(t_Tan *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonForceModelContext::class$ = NULL;
            jmethodID *PythonForceModelContext::mids$ = NULL;
            bool PythonForceModelContext::live$ = false;

            jclass PythonForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1bc5aa1e86d5eb8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonForceModelContext::PythonForceModelContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_1bc5aa1e86d5eb8d, a0.this$)) {}

            void PythonForceModelContext::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonForceModelContext::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonForceModelContext::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self);
            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args);
            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data);
            static PyGetSetDef t_PythonForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_PythonForceModelContext, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonForceModelContext__methods_[] = {
              DECLARE_METHOD(t_PythonForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonForceModelContext, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonForceModelContext)[] = {
              { Py_tp_methods, t_PythonForceModelContext__methods_ },
              { Py_tp_init, (void *) t_PythonForceModelContext_init_ },
              { Py_tp_getset, t_PythonForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonForceModelContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(PythonForceModelContext, t_PythonForceModelContext, PythonForceModelContext);

            void t_PythonForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonForceModelContext), &PY_TYPE_DEF(PythonForceModelContext), module, "PythonForceModelContext", 1);
            }

            void t_PythonForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "class_", make_descriptor(PythonForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "wrapfn_", make_descriptor(t_PythonForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonForceModelContext::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonForceModelContext_pythonDecRef0 },
              };
              env->registerNatives(cls, methods, 1);
            }

            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonForceModelContext::initializeClass, 1)))
                return NULL;
              return t_PythonForceModelContext::wrap_Object(PythonForceModelContext(((t_PythonForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              PythonForceModelContext object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0))
              {
                INT_CALL(object = PythonForceModelContext(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_5cf151a4e561f8d6] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_5cf151a4e561f8d6], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBody.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBody::class$ = NULL;
      jmethodID *PythonCelestialBody::mids$ = NULL;
      bool PythonCelestialBody::live$ = false;

      jclass PythonCelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyOrientedFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_456d9a2f64d6b28d] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_toFieldPVCoordinatesProvider_7db5d85881b6baa5] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBody::PythonCelestialBody() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonCelestialBody::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonCelestialBody::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonCelestialBody::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self);
      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data);
      static PyGetSetDef t_PythonCelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBody, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBody__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBody, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBody)[] = {
        { Py_tp_methods, t_PythonCelestialBody__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBody_init_ },
        { Py_tp_getset, t_PythonCelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBody)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBody, t_PythonCelestialBody, PythonCelestialBody);

      void t_PythonCelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBody), &PY_TYPE_DEF(PythonCelestialBody), module, "PythonCelestialBody", 1);
      }

      void t_PythonCelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "class_", make_descriptor(PythonCelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "wrapfn_", make_descriptor(t_PythonCelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBody::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getBodyOrientedFrame0 },
          { "getGM", "()D", (void *) t_PythonCelestialBody_getGM1 },
          { "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getInertiallyOrientedFrame2 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonCelestialBody_getName3 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates4 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates5 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBody_pythonDecRef6 },
          { "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;", (void *) t_PythonCelestialBody_toFieldPVCoordinatesProvider7 },
        };
        env->registerNatives(cls, methods, 8);
      }

      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBody::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBody::wrap_Object(PythonCelestialBody(((t_PythonCelestialBody *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBody object((jobject) NULL);

        INT_CALL(object = PythonCelestialBody());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyOrientedFrame", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getGM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getGM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInertiallyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getInertiallyOrientedFrame", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "toFieldPVCoordinatesProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, &value))
        {
          throwTypeError("toFieldPVCoordinatesProvider", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesWave::class$ = NULL;
          jmethodID *OceanTidesWave::mids$ = NULL;
          bool OceanTidesWave::live$ = false;

          jclass OceanTidesWave::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesWave");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4833a5ef0feb3c61] = env->getMethodID(cls, "<init>", "(III[[[D)V");
              mids$[mid_addContribution_9c11cbc8a8df784e] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/data/BodiesElements;[[D[[D)V");
              mids$[mid_getDoodson_f2f64475e4580546] = env->getMethodID(cls, "getDoodson", "()I");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesWave::OceanTidesWave(jint a0, jint a1, jint a2, const JArray< JArray< JArray< jdouble > > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4833a5ef0feb3c61, a0, a1, a2, a3.this$)) {}

          void OceanTidesWave::addContribution(const ::org::orekit::data::BodiesElements & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addContribution_9c11cbc8a8df784e], a0.this$, a1.this$, a2.this$);
          }

          jint OceanTidesWave::getDoodson() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodson_f2f64475e4580546]);
          }

          jint OceanTidesWave::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_f2f64475e4580546]);
          }

          jint OceanTidesWave::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_f2f64475e4580546]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args);
          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data);
          static PyGetSetDef t_OceanTidesWave__fields_[] = {
            DECLARE_GET_FIELD(t_OceanTidesWave, doodson),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxDegree),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxOrder),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesWave__methods_[] = {
            DECLARE_METHOD(t_OceanTidesWave, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, addContribution, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesWave, getDoodson, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxOrder, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesWave)[] = {
            { Py_tp_methods, t_OceanTidesWave__methods_ },
            { Py_tp_init, (void *) t_OceanTidesWave_init_ },
            { Py_tp_getset, t_OceanTidesWave__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesWave)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesWave, t_OceanTidesWave, OceanTidesWave);

          void t_OceanTidesWave::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesWave), &PY_TYPE_DEF(OceanTidesWave), module, "OceanTidesWave", 0);
          }

          void t_OceanTidesWave::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "class_", make_descriptor(OceanTidesWave::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "wrapfn_", make_descriptor(t_OceanTidesWave::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesWave::initializeClass, 1)))
              return NULL;
            return t_OceanTidesWave::wrap_Object(OceanTidesWave(((t_OceanTidesWave *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesWave::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
            OceanTidesWave object((jobject) NULL);

            if (!parseArgs(args, "III[[[D", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OceanTidesWave(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "k[[D[[D", ::org::orekit::data::BodiesElements::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addContribution(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addContribution", args);
            return NULL;
          }

          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodson());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodson());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/StringWriter.h"
#include "java/lang/StringBuffer.h"
#include "java/io/StringWriter.h"
#include "java/io/IOException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringWriter::class$ = NULL;
    jmethodID *StringWriter::mids$ = NULL;
    bool StringWriter::live$ = false;

    jclass StringWriter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringWriter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_append_6ce9646dad131d1b] = env->getMethodID(cls, "append", "(C)Ljava/io/StringWriter;");
        mids$[mid_append_ce7d318fae93e8c9] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;");
        mids$[mid_append_ddae6d091c15e0cb] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_getBuffer_d50cbf6320007b5d] = env->getMethodID(cls, "getBuffer", "()Ljava/lang/StringBuffer;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_write_e939c6558ae8d313] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_2df38be22737223f] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_10ca79ad48bfee14] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringWriter::StringWriter() : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    StringWriter::StringWriter(jint a0) : ::java::io::Writer(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    StringWriter StringWriter::append(jchar a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_6ce9646dad131d1b], a0));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_ce7d318fae93e8c9], a0.this$));
    }

    StringWriter StringWriter::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringWriter(env->callObjectMethod(this$, mids$[mid_append_ddae6d091c15e0cb], a0.this$, a1, a2));
    }

    void StringWriter::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void StringWriter::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    ::java::lang::StringBuffer StringWriter::getBuffer() const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_getBuffer_d50cbf6320007b5d]));
    }

    ::java::lang::String StringWriter::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    void StringWriter::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e939c6558ae8d313], a0.this$);
    }

    void StringWriter::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void StringWriter::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_2df38be22737223f], a0.this$, a1, a2);
    }

    void StringWriter::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_10ca79ad48bfee14], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self);
    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args);
    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data);
    static PyGetSetDef t_StringWriter__fields_[] = {
      DECLARE_GET_FIELD(t_StringWriter, buffer),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StringWriter__methods_[] = {
      DECLARE_METHOD(t_StringWriter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringWriter, append, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, close, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, flush, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, getBuffer, METH_NOARGS),
      DECLARE_METHOD(t_StringWriter, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringWriter, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringWriter)[] = {
      { Py_tp_methods, t_StringWriter__methods_ },
      { Py_tp_init, (void *) t_StringWriter_init_ },
      { Py_tp_getset, t_StringWriter__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringWriter)[] = {
      &PY_TYPE_DEF(::java::io::Writer),
      NULL
    };

    DEFINE_TYPE(StringWriter, t_StringWriter, StringWriter);

    void t_StringWriter::install(PyObject *module)
    {
      installType(&PY_TYPE(StringWriter), &PY_TYPE_DEF(StringWriter), module, "StringWriter", 0);
    }

    void t_StringWriter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "class_", make_descriptor(StringWriter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "wrapfn_", make_descriptor(t_StringWriter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringWriter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringWriter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringWriter::initializeClass, 1)))
        return NULL;
      return t_StringWriter::wrap_Object(StringWriter(((t_StringWriter *) arg)->object.this$));
    }
    static PyObject *t_StringWriter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringWriter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringWriter_init_(t_StringWriter *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringWriter object((jobject) NULL);

          INT_CALL(object = StringWriter());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          StringWriter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringWriter(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringWriter_append(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringWriter::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringWriter result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringWriter::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringWriter_close(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringWriter_flush(t_StringWriter *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_StringWriter_getBuffer(t_StringWriter *self)
    {
      ::java::lang::StringBuffer result((jobject) NULL);
      OBJ_CALL(result = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(result);
    }

    static PyObject *t_StringWriter_toString(t_StringWriter *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringWriter_write(t_StringWriter *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(StringWriter), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_StringWriter_get__buffer(t_StringWriter *self, void *data)
    {
      ::java::lang::StringBuffer value((jobject) NULL);
      OBJ_CALL(value = self->object.getBuffer());
      return ::java::lang::t_StringBuffer::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSPhaseModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dd70a907d504c65c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSPhaseModifier::OnBoardAntennaOneWayGNSSPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd70a907d504c65c, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OnBoardAntennaOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier, t_OnBoardAntennaOneWayGNSSPhaseModifier, OnBoardAntennaOneWayGNSSPhaseModifier);

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSPhaseModifier), module, "OnBoardAntennaOneWayGNSSPhaseModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_Object(OnBoardAntennaOneWayGNSSPhaseModifier(((t_OnBoardAntennaOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TrivariateGridInterpolator::class$ = NULL;
        jmethodID *TrivariateGridInterpolator::mids$ = NULL;
        bool TrivariateGridInterpolator::live$ = false;

        jclass TrivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TrivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_1a77b55110e06f36] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/TrivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::TrivariateFunction TrivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::TrivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_1a77b55110e06f36], a0.this$, a1.this$, a2.this$, a3.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_TrivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_TrivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrivariateGridInterpolator)[] = {
          { Py_tp_methods, t_TrivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TrivariateGridInterpolator, t_TrivariateGridInterpolator, TrivariateGridInterpolator);

        void t_TrivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrivariateGridInterpolator), &PY_TYPE_DEF(TrivariateGridInterpolator), module, "TrivariateGridInterpolator", 0);
        }

        void t_TrivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "class_", make_descriptor(TrivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "wrapfn_", make_descriptor(t_TrivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_TrivariateGridInterpolator::wrap_Object(TrivariateGridInterpolator(((t_TrivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::TrivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::t_TrivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DecompositionSolver::class$ = NULL;
      jmethodID *DecompositionSolver::mids$ = NULL;
      bool DecompositionSolver::live$ = false;

      jclass DecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_7116bbecdd8ceb21] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_e470b6d9e0d979db] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_a3e626dfa1abd779] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_e00cd33aedcc5bd0] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_7116bbecdd8ceb21]));
      }

      jint DecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      jboolean DecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::RealVector DecompositionSolver::solve(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_a3e626dfa1abd779], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::solve(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_solve_e00cd33aedcc5bd0], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args);
      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data);
      static PyGetSetDef t_DecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_DecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_DecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_DecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_DecompositionSolver, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_DecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DecompositionSolver)[] = {
        { Py_tp_methods, t_DecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DecompositionSolver, t_DecompositionSolver, DecompositionSolver);

      void t_DecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(DecompositionSolver), &PY_TYPE_DEF(DecompositionSolver), module, "DecompositionSolver", 0);
      }

      void t_DecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "class_", make_descriptor(DecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "wrapfn_", make_descriptor(t_DecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_DecompositionSolver::wrap_Object(DecompositionSolver(((t_DecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinh::class$ = NULL;
        jmethodID *Sinh::mids$ = NULL;
        bool Sinh::live$ = false;

        jclass Sinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinh::Sinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Sinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args);

        static PyMethodDef t_Sinh__methods_[] = {
          DECLARE_METHOD(t_Sinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinh)[] = {
          { Py_tp_methods, t_Sinh__methods_ },
          { Py_tp_init, (void *) t_Sinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinh, t_Sinh, Sinh);

        void t_Sinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinh), &PY_TYPE_DEF(Sinh), module, "Sinh", 0);
        }

        void t_Sinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "class_", make_descriptor(Sinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "wrapfn_", make_descriptor(t_Sinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinh::initializeClass, 1)))
            return NULL;
          return t_Sinh::wrap_Object(Sinh(((t_Sinh *) arg)->object.this$));
        }
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds)
        {
          Sinh object((jobject) NULL);

          INT_CALL(object = Sinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/TTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *TTest::class$ = NULL;
        jmethodID *TTest::mids$ = NULL;
        bool TTest::live$ = false;

        jclass TTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/TTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_homoscedasticT_1ce76fb6ff382da9] = env->getMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_7e6cb2d20813e226] = env->getMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_1ce76fb6ff382da9] = env->getMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_7e6cb2d20813e226] = env->getMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_c2fc7bc0a4bc40d1] = env->getMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_pairedT_1ce76fb6ff382da9] = env->getMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_1ce76fb6ff382da9] = env->getMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_c2fc7bc0a4bc40d1] = env->getMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_t_1ce76fb6ff382da9] = env->getMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_618a40a0b95154fa] = env->getMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_eac47427cc058468] = env->getMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_7e6cb2d20813e226] = env->getMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_1ce76fb6ff382da9] = env->getMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_618a40a0b95154fa] = env->getMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_eac47427cc058468] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_7e6cb2d20813e226] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_c2fc7bc0a4bc40d1] = env->getMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_44e7d76275f3c148] = env->getMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_290296050888289c] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_d1075db52bf9375e] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_t_88076de049bf2857] = env->getMethodID(cls, "t", "(DDDDDD)D");
            mids$[mid_t_04175aacb25dae17] = env->getMethodID(cls, "t", "(DDDD)D");
            mids$[mid_df_04175aacb25dae17] = env->getMethodID(cls, "df", "(DDDD)D");
            mids$[mid_homoscedasticT_88076de049bf2857] = env->getMethodID(cls, "homoscedasticT", "(DDDDDD)D");
            mids$[mid_tTest_04175aacb25dae17] = env->getMethodID(cls, "tTest", "(DDDD)D");
            mids$[mid_tTest_88076de049bf2857] = env->getMethodID(cls, "tTest", "(DDDDDD)D");
            mids$[mid_homoscedasticTTest_88076de049bf2857] = env->getMethodID(cls, "homoscedasticTTest", "(DDDDDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TTest::TTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble TTest::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jboolean TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_homoscedasticTTest_c2fc7bc0a4bc40d1], a0.this$, a1.this$, a2);
        }

        jdouble TTest::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedT_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedTTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jboolean TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_pairedTTest_c2fc7bc0a4bc40d1], a0.this$, a1.this$, a2);
        }

        jdouble TTest::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_618a40a0b95154fa], a0, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_eac47427cc058468], a0, a1.this$);
        }

        jdouble TTest::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_618a40a0b95154fa], a0, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_eac47427cc058468], a0, a1.this$);
        }

        jdouble TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jboolean TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_c2fc7bc0a4bc40d1], a0.this$, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_44e7d76275f3c148], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_290296050888289c], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_d1075db52bf9375e], a0.this$, a1.this$, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_t(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args);

        static PyMethodDef t_TTest__methods_[] = {
          DECLARE_METHOD(t_TTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, homoscedasticT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, homoscedasticTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, t, METH_VARARGS),
          DECLARE_METHOD(t_TTest, tTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TTest)[] = {
          { Py_tp_methods, t_TTest__methods_ },
          { Py_tp_init, (void *) t_TTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TTest, t_TTest, TTest);

        void t_TTest::install(PyObject *module)
        {
          installType(&PY_TYPE(TTest), &PY_TYPE_DEF(TTest), module, "TTest", 0);
        }

        void t_TTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "class_", make_descriptor(TTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "wrapfn_", make_descriptor(t_TTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TTest::initializeClass, 1)))
            return NULL;
          return t_TTest::wrap_Object(TTest(((t_TTest *) arg)->object.this$));
        }
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds)
        {
          TTest object((jobject) NULL);

          INT_CALL(object = TTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pairedT", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_t(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "t", args);
          return NULL;
        }

        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStateInterpolator::class$ = NULL;
        jmethodID *ODEStateInterpolator::mids$ = NULL;
        bool ODEStateInterpolator::live$ = false;

        jclass ODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_ced1effea9e5e5d4] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_05e60c2c1f1796ae] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_ced1effea9e5e5d4] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_ced1effea9e5e5d4]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_05e60c2c1f1796ae], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_ced1effea9e5e5d4]));
        }

        jboolean ODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db]);
        }

        jboolean ODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        jboolean ODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyGetSetDef t_ODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_ODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_ODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStateInterpolator)[] = {
          { Py_tp_methods, t_ODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ODEStateInterpolator, t_ODEStateInterpolator, ODEStateInterpolator);

        void t_ODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStateInterpolator), &PY_TYPE_DEF(ODEStateInterpolator), module, "ODEStateInterpolator", 0);
        }

        void t_ODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "class_", make_descriptor(ODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "wrapfn_", make_descriptor(t_ODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_ODEStateInterpolator::wrap_Object(ODEStateInterpolator(((t_ODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Header::class$ = NULL;
              jmethodID *SsrIgm01Header::mids$ = NULL;
              bool SsrIgm01Header::live$ = false;

              jclass SsrIgm01Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_f2f64475e4580546] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_0a2a1ac2721c0336] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Header::SsrIgm01Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint SsrIgm01Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_f2f64475e4580546]);
              }

              void SsrIgm01Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_0a2a1ac2721c0336], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self);
              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg);
              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data);
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Header)[] = {
                { Py_tp_methods, t_SsrIgm01Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Header_init_ },
                { Py_tp_getset, t_SsrIgm01Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Header, t_SsrIgm01Header, SsrIgm01Header);

              void t_SsrIgm01Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Header), &PY_TYPE_DEF(SsrIgm01Header), module, "SsrIgm01Header", 0);
              }

              void t_SsrIgm01Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "class_", make_descriptor(SsrIgm01Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "wrapfn_", make_descriptor(t_SsrIgm01Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Header::wrap_Object(SsrIgm01Header(((t_SsrIgm01Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Header object((jobject) NULL);

                INT_CALL(object = SsrIgm01Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParsedUnitsBehavior::class$ = NULL;
          jmethodID *ParsedUnitsBehavior::mids$ = NULL;
          bool ParsedUnitsBehavior::live$ = false;
          ParsedUnitsBehavior *ParsedUnitsBehavior::CONVERT_COMPATIBLE = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::IGNORE_PARSED = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::STRICT_COMPLIANCE = NULL;

          jclass ParsedUnitsBehavior::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParsedUnitsBehavior");

              mids$ = new jmethodID[max_mid];
              mids$[mid_select_e160e930f3181018] = env->getMethodID(cls, "select", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
              mids$[mid_valueOf_a4d67bfdcd24dc92] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_values_b8c172bacd93e631] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONVERT_COMPATIBLE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "CONVERT_COMPATIBLE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              IGNORE_PARSED = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "IGNORE_PARSED", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              STRICT_COMPLIANCE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "STRICT_COMPLIANCE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::units::Unit ParsedUnitsBehavior::select(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) const
          {
            return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_select_e160e930f3181018], a0.this$, a1.this$));
          }

          ParsedUnitsBehavior ParsedUnitsBehavior::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ParsedUnitsBehavior(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a4d67bfdcd24dc92], a0.this$));
          }

          JArray< ParsedUnitsBehavior > ParsedUnitsBehavior::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ParsedUnitsBehavior >(env->callStaticObjectMethod(cls, mids$[mid_values_b8c172bacd93e631]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type);
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data);
          static PyGetSetDef t_ParsedUnitsBehavior__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedUnitsBehavior, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedUnitsBehavior__methods_[] = {
            DECLARE_METHOD(t_ParsedUnitsBehavior, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, select, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedUnitsBehavior)[] = {
            { Py_tp_methods, t_ParsedUnitsBehavior__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedUnitsBehavior__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedUnitsBehavior)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ParsedUnitsBehavior, t_ParsedUnitsBehavior, ParsedUnitsBehavior);
          PyObject *t_ParsedUnitsBehavior::wrap_Object(const ParsedUnitsBehavior& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParsedUnitsBehavior::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParsedUnitsBehavior::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedUnitsBehavior), &PY_TYPE_DEF(ParsedUnitsBehavior), module, "ParsedUnitsBehavior", 0);
          }

          void t_ParsedUnitsBehavior::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "class_", make_descriptor(ParsedUnitsBehavior::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "wrapfn_", make_descriptor(t_ParsedUnitsBehavior::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "boxfn_", make_descriptor(boxObject));
            env->getClass(ParsedUnitsBehavior::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "CONVERT_COMPATIBLE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::CONVERT_COMPATIBLE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "IGNORE_PARSED", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::IGNORE_PARSED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "STRICT_COMPLIANCE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::STRICT_COMPLIANCE)));
          }

          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedUnitsBehavior::initializeClass, 1)))
              return NULL;
            return t_ParsedUnitsBehavior::wrap_Object(ParsedUnitsBehavior(((t_ParsedUnitsBehavior *) arg)->object.this$));
          }
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedUnitsBehavior::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            ::org::orekit::utils::units::Unit a0((jobject) NULL);
            ::org::orekit::utils::units::Unit a1((jobject) NULL);
            ::org::orekit::utils::units::Unit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.select(a0, a1));
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "select", args);
            return NULL;
          }

          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ParsedUnitsBehavior result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::valueOf(a0));
              return t_ParsedUnitsBehavior::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type)
          {
            JArray< ParsedUnitsBehavior > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::values());
            return JArray<jobject>(result.this$).wrap(t_ParsedUnitsBehavior::wrap_jobject);
          }
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradient::class$ = NULL;
        jmethodID *FieldGradient::mids$ = NULL;
        bool FieldGradient::live$ = false;

        jclass FieldGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5582e6a53cddd0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_ef0bb554ba052051] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_851fced738c97d02] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acos_851fced738c97d02] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acosh_851fced738c97d02] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_65c422e763f3db46] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_7c05cc19420282ed] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_750ab8e881e992d2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asin_851fced738c97d02] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asinh_851fced738c97d02] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan_851fced738c97d02] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan2_65c422e763f3db46] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atanh_851fced738c97d02] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cbrt_851fced738c97d02] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ceil_851fced738c97d02] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_compose_4cce945c538c4a2d] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_constant_2b015d88b1f5affa] = env->getStaticMethodID(cls, "constant", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_65c422e763f3db46] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_7c05cc19420282ed] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_750ab8e881e992d2] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cos_851fced738c97d02] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cosh_851fced738c97d02] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_65c422e763f3db46] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_7c05cc19420282ed] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_750ab8e881e992d2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_851fced738c97d02] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_expm1_851fced738c97d02] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_floor_851fced738c97d02] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_eaee35878aa9fd7c] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_01c7d10e96d5cf94] = env->getMethodID(cls, "getGradient", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_f622835d869c0081] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPartialDerivative_d0960d09d84b1c1d] = env->getMethodID(cls, "getPartialDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_851fced738c97d02] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_65c422e763f3db46] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d83ba043fd763eae] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_233139fc8f728fd2] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_978f2aed19cad37a] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldGradient;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_e5acb866d76d9b25] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_46e2eb2d36e14bc3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_82aa0e4514a16f10] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_4033ffa367494482] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_fd2f5d1de1813202] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_192bdc44a81de9fc] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_b17fedfe3af5622c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log_851fced738c97d02] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log10_851fced738c97d02] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log1p_851fced738c97d02] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_65c422e763f3db46] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_7c05cc19420282ed] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_f5a652a5467bb563] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_750ab8e881e992d2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_negate_851fced738c97d02] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_7c05cc19420282ed] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_750ab8e881e992d2] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_65c422e763f3db46] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_7c05cc19420282ed] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_f5a652a5467bb563] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_9a0abf650e52a0a0] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_reciprocal_851fced738c97d02] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_65c422e763f3db46] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_7c05cc19420282ed] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_750ab8e881e992d2] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rint_851fced738c97d02] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rootN_f5a652a5467bb563] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_scalb_f5a652a5467bb563] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sign_851fced738c97d02] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sin_851fced738c97d02] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_851fced738c97d02] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_851fced738c97d02] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_65c422e763f3db46] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_7c05cc19420282ed] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_750ab8e881e992d2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tan_851fced738c97d02] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tanh_851fced738c97d02] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_taylor_5e09d3ff87d23c4c] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_05c598bf3375e090] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_851fced738c97d02] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_toDerivativeStructure_7208bb4259086f92] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_851fced738c97d02] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ulp_851fced738c97d02] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_variable_dc0fc4ae96d1f8ea] = env->getStaticMethodID(cls, "variable", "(IILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldGradient::FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5582e6a53cddd0c, a0.this$)) {}

        FieldGradient::FieldGradient(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef0bb554ba052051, a0.this$, a1.this$)) {}

        FieldGradient FieldGradient::abs() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_abs_851fced738c97d02]));
        }

        FieldGradient FieldGradient::acos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acos_851fced738c97d02]));
        }

        FieldGradient FieldGradient::acosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acosh_851fced738c97d02]));
        }

        FieldGradient FieldGradient::add(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::add(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_750ab8e881e992d2], a0.this$));
        }

        FieldGradient FieldGradient::asin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asin_851fced738c97d02]));
        }

        FieldGradient FieldGradient::asinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asinh_851fced738c97d02]));
        }

        FieldGradient FieldGradient::atan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan_851fced738c97d02]));
        }

        FieldGradient FieldGradient::atan2(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan2_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::atanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atanh_851fced738c97d02]));
        }

        FieldGradient FieldGradient::cbrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cbrt_851fced738c97d02]));
        }

        FieldGradient FieldGradient::ceil() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ceil_851fced738c97d02]));
        }

        FieldGradient FieldGradient::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_compose_4cce945c538c4a2d], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::constant(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_constant_2b015d88b1f5affa], a0, a1.this$));
        }

        FieldGradient FieldGradient::copySign(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::copySign(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_750ab8e881e992d2], a0.this$));
        }

        FieldGradient FieldGradient::cos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cos_851fced738c97d02]));
        }

        FieldGradient FieldGradient::cosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cosh_851fced738c97d02]));
        }

        FieldGradient FieldGradient::divide(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::divide(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_750ab8e881e992d2], a0.this$));
        }

        jboolean FieldGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        FieldGradient FieldGradient::exp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_exp_851fced738c97d02]));
        }

        FieldGradient FieldGradient::expm1() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_expm1_851fced738c97d02]));
        }

        FieldGradient FieldGradient::floor() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_floor_851fced738c97d02]));
        }

        jint FieldGradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::FieldGradientField FieldGradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradientField(env->callObjectMethod(this$, mids$[mid_getField_eaee35878aa9fd7c]));
        }

        jint FieldGradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldGradient::getGradient() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGradient_01c7d10e96d5cf94]));
        }

        jint FieldGradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_f622835d869c0081], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_d0960d09d84b1c1d], a0));
        }

        FieldGradient FieldGradient::getPi() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_getPi_851fced738c97d02]));
        }

        jdouble FieldGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
        }

        ::org::hipparchus::Field FieldGradient::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_70b4bbd3fa378d6b]));
        }

        jint FieldGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        FieldGradient FieldGradient::hypot(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_hypot_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< jdouble > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d83ba043fd763eae], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_233139fc8f728fd2], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< FieldGradient > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_978f2aed19cad37a], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e5acb866d76d9b25], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_46e2eb2d36e14bc3], a0, a1.this$, a2, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_82aa0e4514a16f10], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_4033ffa367494482], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldGradient & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldGradient & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_fd2f5d1de1813202], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5, const FieldGradient & a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_192bdc44a81de9fc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5, jdouble a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_b17fedfe3af5622c], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldGradient FieldGradient::log() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log_851fced738c97d02]));
        }

        FieldGradient FieldGradient::log10() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log10_851fced738c97d02]));
        }

        FieldGradient FieldGradient::log1p() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log1p_851fced738c97d02]));
        }

        FieldGradient FieldGradient::multiply(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::multiply(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::multiply(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_f5a652a5467bb563], a0));
        }

        FieldGradient FieldGradient::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_750ab8e881e992d2], a0.this$));
        }

        FieldGradient FieldGradient::negate() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_negate_851fced738c97d02]));
        }

        FieldGradient FieldGradient::newInstance(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::newInstance(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_750ab8e881e992d2], a0.this$));
        }

        FieldGradient FieldGradient::pow(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::pow(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::pow(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_f5a652a5467bb563], a0));
        }

        FieldGradient FieldGradient::pow(jdouble a0, const FieldGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_9a0abf650e52a0a0], a0, a1.this$));
        }

        FieldGradient FieldGradient::reciprocal() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_851fced738c97d02]));
        }

        FieldGradient FieldGradient::remainder(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::remainder(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_750ab8e881e992d2], a0.this$));
        }

        FieldGradient FieldGradient::rint() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rint_851fced738c97d02]));
        }

        FieldGradient FieldGradient::rootN(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rootN_f5a652a5467bb563], a0));
        }

        FieldGradient FieldGradient::scalb(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_scalb_f5a652a5467bb563], a0));
        }

        FieldGradient FieldGradient::sign() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sign_851fced738c97d02]));
        }

        FieldGradient FieldGradient::sin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sin_851fced738c97d02]));
        }

        ::org::hipparchus::util::FieldSinCos FieldGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        FieldGradient FieldGradient::sinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sinh_851fced738c97d02]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        FieldGradient FieldGradient::sqrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sqrt_851fced738c97d02]));
        }

        FieldGradient FieldGradient::subtract(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_65c422e763f3db46], a0.this$));
        }

        FieldGradient FieldGradient::subtract(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_7c05cc19420282ed], a0));
        }

        FieldGradient FieldGradient::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_750ab8e881e992d2], a0.this$));
        }

        FieldGradient FieldGradient::tan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tan_851fced738c97d02]));
        }

        FieldGradient FieldGradient::tanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tanh_851fced738c97d02]));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_5e09d3ff87d23c4c], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_05c598bf3375e090], a0.this$));
        }

        FieldGradient FieldGradient::toDegrees() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_851fced738c97d02]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldGradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_7208bb4259086f92]));
        }

        FieldGradient FieldGradient::toRadians() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toRadians_851fced738c97d02]));
        }

        FieldGradient FieldGradient::ulp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ulp_851fced738c97d02]));
        }

        FieldGradient FieldGradient::variable(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_variable_dc0fc4ae96d1f8ea], a0, a1, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args);
        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldGradient_abs(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_asin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self);
        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_cos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_exp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self);
        static PyObject *t_FieldGradient_floor(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_log(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log10(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self);
        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_negate(t_FieldGradient *self);
        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_rint(t_FieldGradient *self);
        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_sign(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_tan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data);
        static PyGetSetDef t_FieldGradient__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradient, exponent),
          DECLARE_GET_FIELD(t_FieldGradient, field),
          DECLARE_GET_FIELD(t_FieldGradient, freeParameters),
          DECLARE_GET_FIELD(t_FieldGradient, gradient),
          DECLARE_GET_FIELD(t_FieldGradient, order),
          DECLARE_GET_FIELD(t_FieldGradient, pi),
          DECLARE_GET_FIELD(t_FieldGradient, real),
          DECLARE_GET_FIELD(t_FieldGradient, value),
          DECLARE_GET_FIELD(t_FieldGradient, valueField),
          DECLARE_GET_FIELD(t_FieldGradient, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradient__methods_[] = {
          DECLARE_METHOD(t_FieldGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan2, METH_O),
          DECLARE_METHOD(t_FieldGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, hypot, METH_O),
          DECLARE_METHOD(t_FieldGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, rootN, METH_O),
          DECLARE_METHOD(t_FieldGradient, scalb, METH_O),
          DECLARE_METHOD(t_FieldGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradient)[] = {
          { Py_tp_methods, t_FieldGradient__methods_ },
          { Py_tp_init, (void *) t_FieldGradient_init_ },
          { Py_tp_getset, t_FieldGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradient, t_FieldGradient, FieldGradient);
        PyObject *t_FieldGradient::wrap_Object(const FieldGradient& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradient::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradient), &PY_TYPE_DEF(FieldGradient), module, "FieldGradient", 0);
        }

        void t_FieldGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "class_", make_descriptor(FieldGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "wrapfn_", make_descriptor(t_FieldGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradient::initializeClass, 1)))
            return NULL;
          return t_FieldGradient::wrap_Object(FieldGradient(((t_FieldGradient *) arg)->object.this$));
        }
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldGradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGradient(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldGradient_abs(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_asin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::constant(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_cos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradient_exp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_floor(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getField(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldGradient > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient a6((jobject) NULL);
              PyTypeObject **p6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_, &a6, &p6, t_FieldGradient::parameters_, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_, &a6, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_log(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log10(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_negate(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldGradient a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::pow(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_rint(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_sign(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_tan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::variable(a0, a1, a2));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data)
        {
          FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PredictedEOPHistory.h"
#include "org/orekit/frames/EOPFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PredictedEOPHistory::class$ = NULL;
      jmethodID *PredictedEOPHistory::mids$ = NULL;
      bool PredictedEOPHistory::live$ = false;

      jclass PredictedEOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PredictedEOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de742387a85f4b85] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/EOPHistory;DLorg/orekit/frames/EOPFitter;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PredictedEOPHistory::PredictedEOPHistory(const ::org::orekit::frames::EOPHistory & a0, jdouble a1, const ::org::orekit::frames::EOPFitter & a2) : ::org::orekit::frames::EOPHistory(env->newObject(initializeClass, &mids$, mid_init$_de742387a85f4b85, a0.this$, a1, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PredictedEOPHistory__methods_[] = {
        DECLARE_METHOD(t_PredictedEOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PredictedEOPHistory, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PredictedEOPHistory)[] = {
        { Py_tp_methods, t_PredictedEOPHistory__methods_ },
        { Py_tp_init, (void *) t_PredictedEOPHistory_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PredictedEOPHistory)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::EOPHistory),
        NULL
      };

      DEFINE_TYPE(PredictedEOPHistory, t_PredictedEOPHistory, PredictedEOPHistory);

      void t_PredictedEOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(PredictedEOPHistory), &PY_TYPE_DEF(PredictedEOPHistory), module, "PredictedEOPHistory", 0);
      }

      void t_PredictedEOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "class_", make_descriptor(PredictedEOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "wrapfn_", make_descriptor(t_PredictedEOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PredictedEOPHistory::initializeClass, 1)))
          return NULL;
        return t_PredictedEOPHistory::wrap_Object(PredictedEOPHistory(((t_PredictedEOPHistory *) arg)->object.this$));
      }
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PredictedEOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::frames::EOPFitter a2((jobject) NULL);
        PredictedEOPHistory object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::frames::EOPFitter::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PredictedEOPHistory(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/OLSMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *OLSMultipleLinearRegression::class$ = NULL;
        jmethodID *OLSMultipleLinearRegression::mids$ = NULL;
        bool OLSMultipleLinearRegression::live$ = false;

        jclass OLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/OLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_calculateAdjustedRSquared_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateAdjustedRSquared", "()D");
            mids$[mid_calculateHat_7116bbecdd8ceb21] = env->getMethodID(cls, "calculateHat", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateRSquared_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateRSquared", "()D");
            mids$[mid_calculateResidualSumOfSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateResidualSumOfSquares", "()D");
            mids$[mid_calculateTotalSumOfSquares_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateTotalSumOfSquares", "()D");
            mids$[mid_newSampleData_cdae0ed71cfef3d1] = env->getMethodID(cls, "newSampleData", "([D[[D)V");
            mids$[mid_newSampleData_d3508f432c1d798d] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_newXSampleData_d660c7a97bf55272] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_calculateBeta_6d9adf1d5b463928] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_7116bbecdd8ceb21] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OLSMultipleLinearRegression::OLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        OLSMultipleLinearRegression::OLSMultipleLinearRegression(jdouble a0) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble OLSMultipleLinearRegression::calculateAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateAdjustedRSquared_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::linear::RealMatrix OLSMultipleLinearRegression::calculateHat() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_calculateHat_7116bbecdd8ceb21]));
        }

        jdouble OLSMultipleLinearRegression::calculateRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateRSquared_456d9a2f64d6b28d]);
        }

        jdouble OLSMultipleLinearRegression::calculateResidualSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateResidualSumOfSquares_456d9a2f64d6b28d]);
        }

        jdouble OLSMultipleLinearRegression::calculateTotalSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_calculateTotalSumOfSquares_456d9a2f64d6b28d]);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_cdae0ed71cfef3d1], a0.this$, a1.this$);
        }

        void OLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_d3508f432c1d798d], a0.this$, a1, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self);
        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_OLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_OLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateHat, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateRSquared, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateResidualSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, calculateTotalSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_OLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_OLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_OLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(OLSMultipleLinearRegression, t_OLSMultipleLinearRegression, OLSMultipleLinearRegression);

        void t_OLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(OLSMultipleLinearRegression), &PY_TYPE_DEF(OLSMultipleLinearRegression), module, "OLSMultipleLinearRegression", 0);
        }

        void t_OLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "class_", make_descriptor(OLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_OLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_OLSMultipleLinearRegression::wrap_Object(OLSMultipleLinearRegression(((t_OLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_OLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OLSMultipleLinearRegression_init_(t_OLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              OLSMultipleLinearRegression object((jobject) NULL);

              INT_CALL(object = OLSMultipleLinearRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jdouble a0;
              OLSMultipleLinearRegression object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = OLSMultipleLinearRegression(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateAdjustedRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateHat(t_OLSMultipleLinearRegression *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.calculateHat());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateRSquared(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateResidualSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateResidualSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_calculateTotalSumOfSquares(t_OLSMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.calculateTotalSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OLSMultipleLinearRegression_newSampleData(t_OLSMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.newSampleData(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(OLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *InterpolationMethod::class$ = NULL;
              jmethodID *InterpolationMethod::mids$ = NULL;
              bool InterpolationMethod::live$ = false;
              InterpolationMethod *InterpolationMethod::HERMITE = NULL;
              InterpolationMethod *InterpolationMethod::LAGRANGE = NULL;
              InterpolationMethod *InterpolationMethod::LINEAR = NULL;
              InterpolationMethod *InterpolationMethod::PROPAGATE = NULL;

              jclass InterpolationMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_c5cb63d227fb6d27] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_values_dc3a7f855c509982] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  HERMITE = new InterpolationMethod(env->getStaticObjectField(cls, "HERMITE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LAGRANGE = new InterpolationMethod(env->getStaticObjectField(cls, "LAGRANGE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  LINEAR = new InterpolationMethod(env->getStaticObjectField(cls, "LINEAR", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  PROPAGATE = new InterpolationMethod(env->getStaticObjectField(cls, "PROPAGATE", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              InterpolationMethod InterpolationMethod::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InterpolationMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c5cb63d227fb6d27], a0.this$));
              }

              JArray< InterpolationMethod > InterpolationMethod::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InterpolationMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_dc3a7f855c509982]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args);
              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InterpolationMethod_values(PyTypeObject *type);
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data);
              static PyGetSetDef t_InterpolationMethod__fields_[] = {
                DECLARE_GET_FIELD(t_InterpolationMethod, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InterpolationMethod__methods_[] = {
                DECLARE_METHOD(t_InterpolationMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, of_, METH_VARARGS),
                DECLARE_METHOD(t_InterpolationMethod, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InterpolationMethod, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InterpolationMethod)[] = {
                { Py_tp_methods, t_InterpolationMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InterpolationMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InterpolationMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InterpolationMethod, t_InterpolationMethod, InterpolationMethod);
              PyObject *t_InterpolationMethod::wrap_Object(const InterpolationMethod& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InterpolationMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InterpolationMethod::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InterpolationMethod *self = (t_InterpolationMethod *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InterpolationMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(InterpolationMethod), &PY_TYPE_DEF(InterpolationMethod), module, "InterpolationMethod", 0);
              }

              void t_InterpolationMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "class_", make_descriptor(InterpolationMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "wrapfn_", make_descriptor(t_InterpolationMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(InterpolationMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "HERMITE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::HERMITE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LAGRANGE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LAGRANGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "LINEAR", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::LINEAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationMethod), "PROPAGATE", make_descriptor(t_InterpolationMethod::wrap_Object(*InterpolationMethod::PROPAGATE)));
              }

              static PyObject *t_InterpolationMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InterpolationMethod::initializeClass, 1)))
                  return NULL;
                return t_InterpolationMethod::wrap_Object(InterpolationMethod(((t_InterpolationMethod *) arg)->object.this$));
              }
              static PyObject *t_InterpolationMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InterpolationMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InterpolationMethod_of_(t_InterpolationMethod *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InterpolationMethod_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InterpolationMethod result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::valueOf(a0));
                  return t_InterpolationMethod::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InterpolationMethod_values(PyTypeObject *type)
              {
                JArray< InterpolationMethod > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::values());
                return JArray<jobject>(result.this$).wrap(t_InterpolationMethod::wrap_jobject);
              }
              static PyObject *t_InterpolationMethod_get__parameters_(t_InterpolationMethod *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FilenameFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilenameFilter::class$ = NULL;
    jmethodID *FilenameFilter::mids$ = NULL;
    bool FilenameFilter::live$ = false;

    jclass FilenameFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilenameFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_43071cb6948a14d8] = env->getMethodID(cls, "accept", "(Ljava/io/File;Ljava/lang/String;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FilenameFilter::accept(const ::java::io::File & a0, const ::java::lang::String & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_43071cb6948a14d8], a0.this$, a1.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilenameFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilenameFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilenameFilter_accept(t_FilenameFilter *self, PyObject *args);

    static PyMethodDef t_FilenameFilter__methods_[] = {
      DECLARE_METHOD(t_FilenameFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilenameFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilenameFilter, accept, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilenameFilter)[] = {
      { Py_tp_methods, t_FilenameFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilenameFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FilenameFilter, t_FilenameFilter, FilenameFilter);

    void t_FilenameFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FilenameFilter), &PY_TYPE_DEF(FilenameFilter), module, "FilenameFilter", 0);
    }

    void t_FilenameFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "class_", make_descriptor(FilenameFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "wrapfn_", make_descriptor(t_FilenameFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilenameFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilenameFilter::initializeClass, 1)))
        return NULL;
      return t_FilenameFilter::wrap_Object(FilenameFilter(((t_FilenameFilter *) arg)->object.this$));
    }
    static PyObject *t_FilenameFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilenameFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FilenameFilter_accept(t_FilenameFilter *self, PyObject *args)
    {
      ::java::io::File a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.accept(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NamedPackage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NamedPackage::class$ = NULL;
    jmethodID *NamedPackage::mids$ = NULL;
    bool NamedPackage::live$ = false;

    jclass NamedPackage::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NamedPackage");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_NamedPackage__methods_[] = {
      DECLARE_METHOD(t_NamedPackage, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NamedPackage, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NamedPackage)[] = {
      { Py_tp_methods, t_NamedPackage__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NamedPackage)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(NamedPackage, t_NamedPackage, NamedPackage);

    void t_NamedPackage::install(PyObject *module)
    {
      installType(&PY_TYPE(NamedPackage), &PY_TYPE_DEF(NamedPackage), module, "NamedPackage", 0);
    }

    void t_NamedPackage::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "class_", make_descriptor(NamedPackage::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "wrapfn_", make_descriptor(t_NamedPackage::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NamedPackage), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NamedPackage_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NamedPackage::initializeClass, 1)))
        return NULL;
      return t_NamedPackage::wrap_Object(NamedPackage(((t_NamedPackage *) arg)->object.this$));
    }
    static PyObject *t_NamedPackage_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NamedPackage::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/SortedSet.h"
#include "java/util/Comparator.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *SortedSet::class$ = NULL;
    jmethodID *SortedSet::mids$ = NULL;
    bool SortedSet::live$ = false;

    jclass SortedSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/SortedSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparator_838794f9a43cf98e] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_first_dfd7647d9110ac9f] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_headSet_5cc25b3ab2f54634] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_last_dfd7647d9110ac9f] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_7f0b8ff9f951c500] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_5cc25b3ab2f54634] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_838794f9a43cf98e]));
    }

    ::java::lang::Object SortedSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_dfd7647d9110ac9f]));
    }

    SortedSet SortedSet::headSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_5cc25b3ab2f54634], a0.this$));
    }

    ::java::lang::Object SortedSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_dfd7647d9110ac9f]));
    }

    ::java::util::Spliterator SortedSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    SortedSet SortedSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_7f0b8ff9f951c500], a0.this$, a1.this$));
    }

    SortedSet SortedSet::tailSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_5cc25b3ab2f54634], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_comparator(t_SortedSet *self);
    static PyObject *t_SortedSet_first(t_SortedSet *self);
    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_last(t_SortedSet *self);
    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data);
    static PyGetSetDef t_SortedSet__fields_[] = {
      DECLARE_GET_FIELD(t_SortedSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SortedSet__methods_[] = {
      DECLARE_METHOD(t_SortedSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, first, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, headSet, METH_O),
      DECLARE_METHOD(t_SortedSet, last, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, tailSet, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SortedSet)[] = {
      { Py_tp_methods, t_SortedSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_SortedSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SortedSet)[] = {
      &PY_TYPE_DEF(::java::util::Set),
      NULL
    };

    DEFINE_TYPE(SortedSet, t_SortedSet, SortedSet);
    PyObject *t_SortedSet::wrap_Object(const SortedSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_SortedSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_SortedSet::install(PyObject *module)
    {
      installType(&PY_TYPE(SortedSet), &PY_TYPE_DEF(SortedSet), module, "SortedSet", 0);
    }

    void t_SortedSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "class_", make_descriptor(SortedSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "wrapfn_", make_descriptor(t_SortedSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SortedSet::initializeClass, 1)))
        return NULL;
      return t_SortedSet::wrap_Object(SortedSet(((t_SortedSet *) arg)->object.this$));
    }
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SortedSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_SortedSet_comparator(t_SortedSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_SortedSet_first(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.headSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", arg);
      return NULL;
    }

    static PyObject *t_SortedSet_last(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(SortedSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSet(a0, a1));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.tailSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", arg);
      return NULL;
    }
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StackTraceElement::class$ = NULL;
    jmethodID *StackTraceElement::mids$ = NULL;
    bool StackTraceElement::live$ = false;

    jclass StackTraceElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StackTraceElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a38e5b9fc9c5bdfa] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_init$_5bee57db26ada2da] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClassLoaderName_0090f7797e403f43] = env->getMethodID(cls, "getClassLoaderName", "()Ljava/lang/String;");
        mids$[mid_getClassName_0090f7797e403f43] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getFileName_0090f7797e403f43] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
        mids$[mid_getLineNumber_f2f64475e4580546] = env->getMethodID(cls, "getLineNumber", "()I");
        mids$[mid_getMethodName_0090f7797e403f43] = env->getMethodID(cls, "getMethodName", "()Ljava/lang/String;");
        mids$[mid_getModuleName_0090f7797e403f43] = env->getMethodID(cls, "getModuleName", "()Ljava/lang/String;");
        mids$[mid_getModuleVersion_0090f7797e403f43] = env->getMethodID(cls, "getModuleVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isNativeMethod_e470b6d9e0d979db] = env->getMethodID(cls, "isNativeMethod", "()Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a38e5b9fc9c5bdfa, a0.this$, a1.this$, a2.this$, a3)) {}

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bee57db26ada2da, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

    jboolean StackTraceElement::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::String StackTraceElement::getClassLoaderName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassLoaderName_0090f7797e403f43]));
    }

    ::java::lang::String StackTraceElement::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_0090f7797e403f43]));
    }

    ::java::lang::String StackTraceElement::getFileName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_0090f7797e403f43]));
    }

    jint StackTraceElement::getLineNumber() const
    {
      return env->callIntMethod(this$, mids$[mid_getLineNumber_f2f64475e4580546]);
    }

    ::java::lang::String StackTraceElement::getMethodName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMethodName_0090f7797e403f43]));
    }

    ::java::lang::String StackTraceElement::getModuleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleName_0090f7797e403f43]));
    }

    ::java::lang::String StackTraceElement::getModuleVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleVersion_0090f7797e403f43]));
    }

    jint StackTraceElement::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean StackTraceElement::isNativeMethod() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNativeMethod_e470b6d9e0d979db]);
    }

    ::java::lang::String StackTraceElement::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StackTraceElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StackTraceElement_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StackTraceElement_init_(t_StackTraceElement *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StackTraceElement_equals(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_getClassLoaderName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getClassName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getFileName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getLineNumber(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getMethodName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getModuleName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getModuleVersion(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_hashCode(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_isNativeMethod(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_toString(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_get__classLoaderName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__className(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__fileName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__lineNumber(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__methodName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__moduleName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__moduleVersion(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__nativeMethod(t_StackTraceElement *self, void *data);
    static PyGetSetDef t_StackTraceElement__fields_[] = {
      DECLARE_GET_FIELD(t_StackTraceElement, classLoaderName),
      DECLARE_GET_FIELD(t_StackTraceElement, className),
      DECLARE_GET_FIELD(t_StackTraceElement, fileName),
      DECLARE_GET_FIELD(t_StackTraceElement, lineNumber),
      DECLARE_GET_FIELD(t_StackTraceElement, methodName),
      DECLARE_GET_FIELD(t_StackTraceElement, moduleName),
      DECLARE_GET_FIELD(t_StackTraceElement, moduleVersion),
      DECLARE_GET_FIELD(t_StackTraceElement, nativeMethod),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StackTraceElement__methods_[] = {
      DECLARE_METHOD(t_StackTraceElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StackTraceElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StackTraceElement, equals, METH_VARARGS),
      DECLARE_METHOD(t_StackTraceElement, getClassLoaderName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getClassName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getFileName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getLineNumber, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getMethodName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getModuleName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getModuleVersion, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_StackTraceElement, isNativeMethod, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StackTraceElement)[] = {
      { Py_tp_methods, t_StackTraceElement__methods_ },
      { Py_tp_init, (void *) t_StackTraceElement_init_ },
      { Py_tp_getset, t_StackTraceElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StackTraceElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(StackTraceElement, t_StackTraceElement, StackTraceElement);

    void t_StackTraceElement::install(PyObject *module)
    {
      installType(&PY_TYPE(StackTraceElement), &PY_TYPE_DEF(StackTraceElement), module, "StackTraceElement", 0);
    }

    void t_StackTraceElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "class_", make_descriptor(StackTraceElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "wrapfn_", make_descriptor(t_StackTraceElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StackTraceElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StackTraceElement::initializeClass, 1)))
        return NULL;
      return t_StackTraceElement::wrap_Object(StackTraceElement(((t_StackTraceElement *) arg)->object.this$));
    }
    static PyObject *t_StackTraceElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StackTraceElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StackTraceElement_init_(t_StackTraceElement *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          StackTraceElement object((jobject) NULL);

          if (!parseArgs(args, "sssI", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = StackTraceElement(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        goto err;
       case 7:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::String a3((jobject) NULL);
          ::java::lang::String a4((jobject) NULL);
          ::java::lang::String a5((jobject) NULL);
          jint a6;
          StackTraceElement object((jobject) NULL);

          if (!parseArgs(args, "ssssssI", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = StackTraceElement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StackTraceElement_equals(t_StackTraceElement *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_StackTraceElement_getClassLoaderName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoaderName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getClassName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getFileName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFileName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getLineNumber(t_StackTraceElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getLineNumber());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_StackTraceElement_getMethodName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMethodName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getModuleName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getModuleName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getModuleVersion(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getModuleVersion());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_hashCode(t_StackTraceElement *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_StackTraceElement_isNativeMethod(t_StackTraceElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNativeMethod());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_StackTraceElement_toString(t_StackTraceElement *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StackTraceElement_get__classLoaderName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoaderName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__className(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__fileName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFileName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__lineNumber(t_StackTraceElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getLineNumber());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_StackTraceElement_get__methodName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMethodName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__moduleName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getModuleName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__moduleVersion(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getModuleVersion());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__nativeMethod(t_StackTraceElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNativeMethod());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator::class$ = NULL;
    jmethodID *Spliterator::mids$ = NULL;
    bool Spliterator::live$ = false;
    jint Spliterator::CONCURRENT = (jint) 0;
    jint Spliterator::DISTINCT = (jint) 0;
    jint Spliterator::IMMUTABLE = (jint) 0;
    jint Spliterator::NONNULL = (jint) 0;
    jint Spliterator::ORDERED = (jint) 0;
    jint Spliterator::SIZED = (jint) 0;
    jint Spliterator::SORTED = (jint) 0;
    jint Spliterator::SUBSIZED = (jint) 0;

    jclass Spliterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_characteristics_f2f64475e4580546] = env->getMethodID(cls, "characteristics", "()I");
        mids$[mid_estimateSize_a27fc9afd27e559d] = env->getMethodID(cls, "estimateSize", "()J");
        mids$[mid_getComparator_838794f9a43cf98e] = env->getMethodID(cls, "getComparator", "()Ljava/util/Comparator;");
        mids$[mid_getExactSizeIfKnown_a27fc9afd27e559d] = env->getMethodID(cls, "getExactSizeIfKnown", "()J");
        mids$[mid_hasCharacteristics_e95e4c7cd3dd17ff] = env->getMethodID(cls, "hasCharacteristics", "(I)Z");
        mids$[mid_trySplit_df0341cda53d4d48] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CONCURRENT = env->getStaticIntField(cls, "CONCURRENT");
        DISTINCT = env->getStaticIntField(cls, "DISTINCT");
        IMMUTABLE = env->getStaticIntField(cls, "IMMUTABLE");
        NONNULL = env->getStaticIntField(cls, "NONNULL");
        ORDERED = env->getStaticIntField(cls, "ORDERED");
        SIZED = env->getStaticIntField(cls, "SIZED");
        SORTED = env->getStaticIntField(cls, "SORTED");
        SUBSIZED = env->getStaticIntField(cls, "SUBSIZED");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Spliterator::characteristics() const
    {
      return env->callIntMethod(this$, mids$[mid_characteristics_f2f64475e4580546]);
    }

    jlong Spliterator::estimateSize() const
    {
      return env->callLongMethod(this$, mids$[mid_estimateSize_a27fc9afd27e559d]);
    }

    ::java::util::Comparator Spliterator::getComparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_getComparator_838794f9a43cf98e]));
    }

    jlong Spliterator::getExactSizeIfKnown() const
    {
      return env->callLongMethod(this$, mids$[mid_getExactSizeIfKnown_a27fc9afd27e559d]);
    }

    jboolean Spliterator::hasCharacteristics(jint a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasCharacteristics_e95e4c7cd3dd17ff], a0);
    }

    Spliterator Spliterator::trySplit() const
    {
      return Spliterator(env->callObjectMethod(this$, mids$[mid_trySplit_df0341cda53d4d48]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfInt.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator_of_(t_Spliterator *self, PyObject *args);
    static PyObject *t_Spliterator_characteristics(t_Spliterator *self);
    static PyObject *t_Spliterator_estimateSize(t_Spliterator *self);
    static PyObject *t_Spliterator_getComparator(t_Spliterator *self);
    static PyObject *t_Spliterator_getExactSizeIfKnown(t_Spliterator *self);
    static PyObject *t_Spliterator_hasCharacteristics(t_Spliterator *self, PyObject *arg);
    static PyObject *t_Spliterator_trySplit(t_Spliterator *self);
    static PyObject *t_Spliterator_get__comparator(t_Spliterator *self, void *data);
    static PyObject *t_Spliterator_get__exactSizeIfKnown(t_Spliterator *self, void *data);
    static PyObject *t_Spliterator_get__parameters_(t_Spliterator *self, void *data);
    static PyGetSetDef t_Spliterator__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator, comparator),
      DECLARE_GET_FIELD(t_Spliterator, exactSizeIfKnown),
      DECLARE_GET_FIELD(t_Spliterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator__methods_[] = {
      DECLARE_METHOD(t_Spliterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator, characteristics, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, estimateSize, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, getComparator, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, getExactSizeIfKnown, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, hasCharacteristics, METH_O),
      DECLARE_METHOD(t_Spliterator, trySplit, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator)[] = {
      { Py_tp_methods, t_Spliterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Spliterator, t_Spliterator, Spliterator);
    PyObject *t_Spliterator::wrap_Object(const Spliterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator *self = (t_Spliterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator *self = (t_Spliterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator), &PY_TYPE_DEF(Spliterator), module, "Spliterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfDouble", make_descriptor(&PY_TYPE_DEF(Spliterator$OfDouble)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfLong", make_descriptor(&PY_TYPE_DEF(Spliterator$OfLong)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfInt", make_descriptor(&PY_TYPE_DEF(Spliterator$OfInt)));
    }

    void t_Spliterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "class_", make_descriptor(Spliterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "wrapfn_", make_descriptor(t_Spliterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "boxfn_", make_descriptor(boxObject));
      env->getClass(Spliterator::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "CONCURRENT", make_descriptor(Spliterator::CONCURRENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "DISTINCT", make_descriptor(Spliterator::DISTINCT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "IMMUTABLE", make_descriptor(Spliterator::IMMUTABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "NONNULL", make_descriptor(Spliterator::NONNULL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "ORDERED", make_descriptor(Spliterator::ORDERED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SIZED", make_descriptor(Spliterator::SIZED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SORTED", make_descriptor(Spliterator::SORTED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SUBSIZED", make_descriptor(Spliterator::SUBSIZED));
    }

    static PyObject *t_Spliterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator::initializeClass, 1)))
        return NULL;
      return t_Spliterator::wrap_Object(Spliterator(((t_Spliterator *) arg)->object.this$));
    }
    static PyObject *t_Spliterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator_of_(t_Spliterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator_characteristics(t_Spliterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.characteristics());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Spliterator_estimateSize(t_Spliterator *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.estimateSize());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Spliterator_getComparator(t_Spliterator *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.getComparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Spliterator_getExactSizeIfKnown(t_Spliterator *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getExactSizeIfKnown());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Spliterator_hasCharacteristics(t_Spliterator *self, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.hasCharacteristics(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hasCharacteristics", arg);
      return NULL;
    }

    static PyObject *t_Spliterator_trySplit(t_Spliterator *self)
    {
      Spliterator result((jobject) NULL);
      OBJ_CALL(result = self->object.trySplit());
      return t_Spliterator::wrap_Object(result, self->parameters[0]);
    }
    static PyObject *t_Spliterator_get__parameters_(t_Spliterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Spliterator_get__comparator(t_Spliterator *self, void *data)
    {
      ::java::util::Comparator value((jobject) NULL);
      OBJ_CALL(value = self->object.getComparator());
      return ::java::util::t_Comparator::wrap_Object(value);
    }

    static PyObject *t_Spliterator_get__exactSizeIfKnown(t_Spliterator *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getExactSizeIfKnown());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Currency.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Currency::class$ = NULL;
    jmethodID *Currency::mids$ = NULL;
    bool Currency::live$ = false;

    jclass Currency::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Currency");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAvailableCurrencies_e9e1a6780fe94297] = env->getStaticMethodID(cls, "getAvailableCurrencies", "()Ljava/util/Set;");
        mids$[mid_getCurrencyCode_0090f7797e403f43] = env->getMethodID(cls, "getCurrencyCode", "()Ljava/lang/String;");
        mids$[mid_getDefaultFractionDigits_f2f64475e4580546] = env->getMethodID(cls, "getDefaultFractionDigits", "()I");
        mids$[mid_getDisplayName_0090f7797e403f43] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getInstance_d691d42a78d5aea5] = env->getStaticMethodID(cls, "getInstance", "(Ljava/lang/String;)Ljava/util/Currency;");
        mids$[mid_getInstance_03910acd542f7bf9] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/util/Currency;");
        mids$[mid_getNumericCode_f2f64475e4580546] = env->getMethodID(cls, "getNumericCode", "()I");
        mids$[mid_getNumericCodeAsString_0090f7797e403f43] = env->getMethodID(cls, "getNumericCodeAsString", "()Ljava/lang/String;");
        mids$[mid_getSymbol_0090f7797e403f43] = env->getMethodID(cls, "getSymbol", "()Ljava/lang/String;");
        mids$[mid_getSymbol_bab3be9b232acc5a] = env->getMethodID(cls, "getSymbol", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set Currency::getAvailableCurrencies()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getAvailableCurrencies_e9e1a6780fe94297]));
    }

    ::java::lang::String Currency::getCurrencyCode() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencyCode_0090f7797e403f43]));
    }

    jint Currency::getDefaultFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultFractionDigits_f2f64475e4580546]);
    }

    ::java::lang::String Currency::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_0090f7797e403f43]));
    }

    ::java::lang::String Currency::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_bab3be9b232acc5a], a0.this$));
    }

    Currency Currency::getInstance(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_d691d42a78d5aea5], a0.this$));
    }

    Currency Currency::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_03910acd542f7bf9], a0.this$));
    }

    jint Currency::getNumericCode() const
    {
      return env->callIntMethod(this$, mids$[mid_getNumericCode_f2f64475e4580546]);
    }

    ::java::lang::String Currency::getNumericCodeAsString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNumericCodeAsString_0090f7797e403f43]));
    }

    ::java::lang::String Currency::getSymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_0090f7797e403f43]));
    }

    ::java::lang::String Currency::getSymbol(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String Currency::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type);
    static PyObject *t_Currency_getCurrencyCode(t_Currency *self);
    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self);
    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_Currency_getNumericCode(t_Currency *self);
    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self);
    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data);
    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data);
    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data);
    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data);
    static PyGetSetDef t_Currency__fields_[] = {
      DECLARE_GET_FIELD(t_Currency, availableCurrencies),
      DECLARE_GET_FIELD(t_Currency, currencyCode),
      DECLARE_GET_FIELD(t_Currency, defaultFractionDigits),
      DECLARE_GET_FIELD(t_Currency, displayName),
      DECLARE_GET_FIELD(t_Currency, numericCode),
      DECLARE_GET_FIELD(t_Currency, numericCodeAsString),
      DECLARE_GET_FIELD(t_Currency, symbol),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Currency__methods_[] = {
      DECLARE_METHOD(t_Currency, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, getAvailableCurrencies, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getCurrencyCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDefaultFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Currency, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getNumericCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getNumericCodeAsString, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getSymbol, METH_VARARGS),
      DECLARE_METHOD(t_Currency, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Currency)[] = {
      { Py_tp_methods, t_Currency__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Currency__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Currency)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Currency, t_Currency, Currency);

    void t_Currency::install(PyObject *module)
    {
      installType(&PY_TYPE(Currency), &PY_TYPE_DEF(Currency), module, "Currency", 0);
    }

    void t_Currency::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "class_", make_descriptor(Currency::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "wrapfn_", make_descriptor(t_Currency::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Currency::initializeClass, 1)))
        return NULL;
      return t_Currency::wrap_Object(Currency(((t_Currency *) arg)->object.this$));
    }
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Currency::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Currency::getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(result, ::java::util::PY_TYPE(Currency));
    }

    static PyObject *t_Currency_getCurrencyCode(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencyCode());
      return j2p(result);
    }

    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
        {
          ::java::util::Locale a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_Currency_getNumericCode(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getNumericCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNumericCodeAsString());
      return j2p(result);
    }

    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSymbol());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getSymbol(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getSymbol", args);
      return NULL;
    }

    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Currency), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyCode());
      return j2p(value);
    }

    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getNumericCode());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumericCodeAsString());
      return j2p(value);
    }

    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSymbol());
      return j2p(value);
    }
  }
}
