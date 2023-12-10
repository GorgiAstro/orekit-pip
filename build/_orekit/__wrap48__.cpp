#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarS::class$ = NULL;
          jmethodID *CopolarS::mids$ = NULL;
          bool CopolarS::live$ = false;

          jclass CopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_dff5885c2c873297] = env->getMethodID(cls, "cs", "()D");
              mids$[mid_ds_dff5885c2c873297] = env->getMethodID(cls, "ds", "()D");
              mids$[mid_ns_dff5885c2c873297] = env->getMethodID(cls, "ns", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarS::cs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cs_dff5885c2c873297]);
          }

          jdouble CopolarS::ds() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ds_dff5885c2c873297]);
          }

          jdouble CopolarS::ns() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ns_dff5885c2c873297]);
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
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_cs(t_CopolarS *self);
          static PyObject *t_CopolarS_ds(t_CopolarS *self);
          static PyObject *t_CopolarS_ns(t_CopolarS *self);

          static PyMethodDef t_CopolarS__methods_[] = {
            DECLARE_METHOD(t_CopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarS)[] = {
            { Py_tp_methods, t_CopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarS, t_CopolarS, CopolarS);

          void t_CopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarS), &PY_TYPE_DEF(CopolarS), module, "CopolarS", 0);
          }

          void t_CopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "class_", make_descriptor(CopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "wrapfn_", make_descriptor(t_CopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarS::initializeClass, 1)))
              return NULL;
            return t_CopolarS::wrap_Object(CopolarS(((t_CopolarS *) arg)->object.this$));
          }
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarS_cs(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ds(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ds());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ns(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ns());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FiltersManager::class$ = NULL;
      jmethodID *FiltersManager::mids$ = NULL;
      bool FiltersManager::live$ = false;

      jclass FiltersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FiltersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addFilter_43cbd53f5e425ae3] = env->getMethodID(cls, "addFilter", "(Lorg/orekit/data/DataFilter;)V");
          mids$[mid_applyRelevantFilters_716adf7a6da8b4d7] = env->getMethodID(cls, "applyRelevantFilters", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_clearFilters_0fa09c18fee449d5] = env->getMethodID(cls, "clearFilters", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FiltersManager::FiltersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void FiltersManager::addFilter(const ::org::orekit::data::DataFilter & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addFilter_43cbd53f5e425ae3], a0.this$);
      }

      ::org::orekit::data::DataSource FiltersManager::applyRelevantFilters(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_applyRelevantFilters_716adf7a6da8b4d7], a0.this$));
      }

      void FiltersManager::clearFilters() const
      {
        env->callVoidMethod(this$, mids$[mid_clearFilters_0fa09c18fee449d5]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self);

      static PyMethodDef t_FiltersManager__methods_[] = {
        DECLARE_METHOD(t_FiltersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, addFilter, METH_O),
        DECLARE_METHOD(t_FiltersManager, applyRelevantFilters, METH_O),
        DECLARE_METHOD(t_FiltersManager, clearFilters, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FiltersManager)[] = {
        { Py_tp_methods, t_FiltersManager__methods_ },
        { Py_tp_init, (void *) t_FiltersManager_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FiltersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FiltersManager, t_FiltersManager, FiltersManager);

      void t_FiltersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(FiltersManager), &PY_TYPE_DEF(FiltersManager), module, "FiltersManager", 0);
      }

      void t_FiltersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "class_", make_descriptor(FiltersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "wrapfn_", make_descriptor(t_FiltersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FiltersManager::initializeClass, 1)))
          return NULL;
        return t_FiltersManager::wrap_Object(FiltersManager(((t_FiltersManager *) arg)->object.this$));
      }
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FiltersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds)
      {
        FiltersManager object((jobject) NULL);

        INT_CALL(object = FiltersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataFilter a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataFilter::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addFilter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addFilter", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.applyRelevantFilters(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "applyRelevantFilters", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self)
      {
        OBJ_CALL(self->object.clearFilters());
        Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cosh::class$ = NULL;
        jmethodID *Cosh::mids$ = NULL;
        bool Cosh::live$ = false;

        jclass Cosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cosh::Cosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Cosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args);

        static PyMethodDef t_Cosh__methods_[] = {
          DECLARE_METHOD(t_Cosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cosh)[] = {
          { Py_tp_methods, t_Cosh__methods_ },
          { Py_tp_init, (void *) t_Cosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cosh, t_Cosh, Cosh);

        void t_Cosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Cosh), &PY_TYPE_DEF(Cosh), module, "Cosh", 0);
        }

        void t_Cosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "class_", make_descriptor(Cosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "wrapfn_", make_descriptor(t_Cosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cosh::initializeClass, 1)))
            return NULL;
          return t_Cosh::wrap_Object(Cosh(((t_Cosh *) arg)->object.this$));
        }
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds)
        {
          Cosh object((jobject) NULL);

          INT_CALL(object = Cosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args)
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
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustPropulsionModel::class$ = NULL;
          jmethodID *ThrustPropulsionModel::mids$ = NULL;
          bool ThrustPropulsionModel::live$ = false;

          jclass ThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_a6c71e83efaf48d0] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_19f36cd1a0a8b9bf] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getDirection_abc43395638fd218] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_432f3d328c15ec82] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_8bdf60d5551eceaf] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_0b7191d207b9680f] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getIsp_432f3d328c15ec82] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getMassDerivatives_0b7191d207b9680f] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_8bdf60d5551eceaf] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getThrustVector_abc43395638fd218] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_8954761face5e1a7] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b42ac4b5bfb80fab] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_a6c71e83efaf48d0], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_19f36cd1a0a8b9bf], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getDirection(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_abc43395638fd218], a0.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_432f3d328c15ec82], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_8bdf60d5551eceaf], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_0b7191d207b9680f], a0.this$, a1.this$);
          }

          jdouble ThrustPropulsionModel::getIsp(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_432f3d328c15ec82], a0.this$);
          }

          jdouble ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_0b7191d207b9680f], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_8bdf60d5551eceaf], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_abc43395638fd218], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8954761face5e1a7], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b42ac4b5bfb80fab], a0.this$, a1.this$));
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args);

          static PyMethodDef t_ThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getDirection, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getIsp, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::PropulsionModel),
            NULL
          };

          DEFINE_TYPE(ThrustPropulsionModel, t_ThrustPropulsionModel, ThrustPropulsionModel);

          void t_ThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustPropulsionModel), &PY_TYPE_DEF(ThrustPropulsionModel), module, "ThrustPropulsionModel", 0);
          }

          void t_ThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "class_", make_descriptor(ThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "wrapfn_", make_descriptor(t_ThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ThrustPropulsionModel::wrap_Object(ThrustPropulsionModel(((t_ThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getAcceleration", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDirection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getIsp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getMassDerivatives", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOFType::class$ = NULL;
      jmethodID *LOFType::mids$ = NULL;
      bool LOFType::live$ = false;
      LOFType *LOFType::EQW = NULL;
      LOFType *LOFType::LVLH = NULL;
      LOFType *LOFType::LVLH_CCSDS = NULL;
      LOFType *LOFType::LVLH_CCSDS_INERTIAL = NULL;
      LOFType *LOFType::LVLH_INERTIAL = NULL;
      LOFType *LOFType::NTW = NULL;
      LOFType *LOFType::NTW_INERTIAL = NULL;
      LOFType *LOFType::QSW = NULL;
      LOFType *LOFType::QSW_INERTIAL = NULL;
      LOFType *LOFType::TNW = NULL;
      LOFType *LOFType::TNW_INERTIAL = NULL;
      LOFType *LOFType::VNC = NULL;
      LOFType *LOFType::VNC_INERTIAL = NULL;
      LOFType *LOFType::VVLH = NULL;
      LOFType *LOFType::VVLH_INERTIAL = NULL;

      jclass LOFType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOFType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_48dfcf66fb3ed19c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_475182fd71c6851b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_00be22c00009a46d] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromInertial_076f35c1feeb36b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_af58d526d9fa9835] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOFType;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_59306c62a2dda902] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOFType;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toOrbitRelativeFrame_65b7b6f762019366] = env->getMethodID(cls, "toOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
          mids$[mid_valueOf_5eea000864e605d6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LOFType;");
          mids$[mid_values_78c6da1ecdb315dd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LOFType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQW = new LOFType(env->getStaticObjectField(cls, "EQW", "Lorg/orekit/frames/LOFType;"));
          LVLH = new LOFType(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          LVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          NTW = new LOFType(env->getStaticObjectField(cls, "NTW", "Lorg/orekit/frames/LOFType;"));
          NTW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          QSW = new LOFType(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/frames/LOFType;"));
          QSW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "QSW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          TNW = new LOFType(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/frames/LOFType;"));
          TNW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VNC = new LOFType(env->getStaticObjectField(cls, "VNC", "Lorg/orekit/frames/LOFType;"));
          VNC_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VVLH = new LOFType(env->getStaticObjectField(cls, "VVLH", "Lorg/orekit/frames/LOFType;"));
          VVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOFType::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_48dfcf66fb3ed19c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_475182fd71c6851b], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_00be22c00009a46d], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_076f35c1feeb36b3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromLOF(const LOFType & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_af58d526d9fa9835], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOFType & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_59306c62a2dda902], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame LOFType::toOrbitRelativeFrame() const
      {
        return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_toOrbitRelativeFrame_65b7b6f762019366]));
      }

      LOFType LOFType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5eea000864e605d6], a0.this$));
      }

      JArray< LOFType > LOFType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_78c6da1ecdb315dd]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_getName(t_LOFType *self);
      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self);
      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOFType_values(PyTypeObject *type);
      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data);
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data);
      static PyGetSetDef t_LOFType__fields_[] = {
        DECLARE_GET_FIELD(t_LOFType, name),
        DECLARE_GET_FIELD(t_LOFType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOFType__methods_[] = {
        DECLARE_METHOD(t_LOFType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, toOrbitRelativeFrame, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOFType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOFType)[] = {
        { Py_tp_methods, t_LOFType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOFType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOFType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LOFType, t_LOFType, LOFType);
      PyObject *t_LOFType::wrap_Object(const LOFType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LOFType::install(PyObject *module)
      {
        installType(&PY_TYPE(LOFType), &PY_TYPE_DEF(LOFType), module, "LOFType", 0);
      }

      void t_LOFType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "class_", make_descriptor(LOFType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "wrapfn_", make_descriptor(t_LOFType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LOFType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "EQW", make_descriptor(t_LOFType::wrap_Object(*LOFType::EQW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH_INERTIAL)));
      }

      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOFType::initializeClass, 1)))
          return NULL;
        return t_LOFType::wrap_Object(LOFType(((t_LOFType *) arg)->object.this$));
      }
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOFType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LOFType_getName(t_LOFType *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            LOFType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "Kk", LOFType::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, t_LOFType::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, LOFType::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, t_LOFType::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self)
      {
        ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbitRelativeFrame());
        return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
      }

      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LOFType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LOFType::valueOf(a0));
          return t_LOFType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LOFType_values(PyTypeObject *type)
      {
        JArray< LOFType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LOFType::values());
        return JArray<jobject>(result.this$).wrap(t_LOFType::wrap_jobject);
      }
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTForceModel::class$ = NULL;
            jmethodID *DSSTForceModel::mids$ = NULL;
            bool DSSTForceModel::live$ = false;

            jclass DSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_extractParameters_020d17bb8c285475] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_extractParameters_547c908eaeea187e] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > DSSTForceModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_020d17bb8c285475], a0.this$, a1.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_547c908eaeea187e], a0.this$, a1.this$));
            }

            ::java::util::stream::Stream DSSTForceModel::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
            }

            ::java::util::stream::Stream DSSTForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
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
            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self);
            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data);
            static PyGetSetDef t_DSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTForceModel, eventDetectors),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_DSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, extractParameters, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, getEventDetectors, METH_NOARGS),
              DECLARE_METHOD(t_DSSTForceModel, getFieldEventDetectors, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, init, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTForceModel)[] = {
              { Py_tp_methods, t_DSSTForceModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTForceModel)[] = {
              &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
              NULL
            };

            DEFINE_TYPE(DSSTForceModel, t_DSSTForceModel, DSSTForceModel);

            void t_DSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTForceModel), &PY_TYPE_DEF(DSSTForceModel), module, "DSSTForceModel", 0);
            }

            void t_DSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "class_", make_descriptor(DSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "wrapfn_", make_descriptor(t_DSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_DSSTForceModel::wrap_Object(DSSTForceModel(((t_DSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return result.wrap();
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self)
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadataKey::class$ = NULL;
              jmethodID *OemMetadataKey::mids$ = NULL;
              bool OemMetadataKey::live$ = false;
              OemMetadataKey *OemMetadataKey::INTERPOLATION = NULL;
              OemMetadataKey *OemMetadataKey::INTERPOLATION_DEGREE = NULL;
              OemMetadataKey *OemMetadataKey::START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::STOP_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass OemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_892dd9ba4cb3beb3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)Z");
                  mids$[mid_valueOf_1a58bc0ccc127771] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");
                  mids$[mid_values_55deafb4722ef4b4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  INTERPOLATION = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  INTERPOLATION_DEGREE = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_892dd9ba4cb3beb3], a0.this$, a1.this$, a2.this$);
              }

              OemMetadataKey OemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1a58bc0ccc127771], a0.this$));
              }

              JArray< OemMetadataKey > OemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_55deafb4722ef4b4]));
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
              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data);
              static PyGetSetDef t_OemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadataKey)[] = {
                { Py_tp_methods, t_OemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OemMetadataKey, t_OemMetadataKey, OemMetadataKey);
              PyObject *t_OemMetadataKey::wrap_Object(const OemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadataKey), &PY_TYPE_DEF(OemMetadataKey), module, "OemMetadataKey", 0);
              }

              void t_OemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "class_", make_descriptor(OemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "wrapfn_", make_descriptor(t_OemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OemMetadataKey::wrap_Object(OemMetadataKey(((t_OemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::valueOf(a0));
                  return t_OemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OemMetadataKey_values(PyTypeObject *type)
              {
                JArray< OemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OemMetadataKey::wrap_jobject);
              }
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *CommentsContainer::class$ = NULL;
          jmethodID *CommentsContainer::mids$ = NULL;
          bool CommentsContainer::live$ = false;

          jclass CommentsContainer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/CommentsContainer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_acceptComments_b108b35ef48e27bd] = env->getMethodID(cls, "acceptComments", "()Z");
              mids$[mid_addComment_7edad2c2f64f4d68] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_checkAllowed_245681ee2b0284d9] = env->getMethodID(cls, "checkAllowed", "(DLjava/lang/Object;Ljava/lang/String;DD)V");
              mids$[mid_checkNotNaN_0f9c4af43dc22978] = env->getMethodID(cls, "checkNotNaN", "(DLjava/lang/String;)V");
              mids$[mid_checkNotNegative_eb545b81bcb6baba] = env->getMethodID(cls, "checkNotNegative", "(ILjava/lang/String;)V");
              mids$[mid_checkNotNull_f535a727b347df63] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/String;)V");
              mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_refuseFurtherComments_0fa09c18fee449d5] = env->getMethodID(cls, "refuseFurtherComments", "()V");
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommentsContainer::CommentsContainer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          jboolean CommentsContainer::acceptComments() const
          {
            return env->callBooleanMethod(this$, mids$[mid_acceptComments_b108b35ef48e27bd]);
          }

          jboolean CommentsContainer::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_7edad2c2f64f4d68], a0.this$);
          }

          void CommentsContainer::checkAllowed(jdouble a0, const ::java::lang::Object & a1, const ::java::lang::String & a2, jdouble a3, jdouble a4) const
          {
            env->callVoidMethod(this$, mids$[mid_checkAllowed_245681ee2b0284d9], a0, a1.this$, a2.this$, a3, a4);
          }

          void CommentsContainer::checkNotNaN(jdouble a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNaN_0f9c4af43dc22978], a0, a1.this$);
          }

          void CommentsContainer::checkNotNegative(jint a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNegative_eb545b81bcb6baba], a0, a1.this$);
          }

          void CommentsContainer::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNull_f535a727b347df63], a0.this$, a1.this$);
          }

          ::java::util::List CommentsContainer::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
          }

          void CommentsContainer::refuseFurtherComments() const
          {
            env->callVoidMethod(this$, mids$[mid_refuseFurtherComments_0fa09c18fee449d5]);
          }

          void CommentsContainer::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
        namespace section {
          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data);
          static PyGetSetDef t_CommentsContainer__fields_[] = {
            DECLARE_GET_FIELD(t_CommentsContainer, comments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommentsContainer__methods_[] = {
            DECLARE_METHOD(t_CommentsContainer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, acceptComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, addComment, METH_O),
            DECLARE_METHOD(t_CommentsContainer, checkAllowed, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNaN, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNegative, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNull, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, getComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, refuseFurtherComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommentsContainer)[] = {
            { Py_tp_methods, t_CommentsContainer__methods_ },
            { Py_tp_init, (void *) t_CommentsContainer_init_ },
            { Py_tp_getset, t_CommentsContainer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommentsContainer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CommentsContainer, t_CommentsContainer, CommentsContainer);

          void t_CommentsContainer::install(PyObject *module)
          {
            installType(&PY_TYPE(CommentsContainer), &PY_TYPE_DEF(CommentsContainer), module, "CommentsContainer", 0);
          }

          void t_CommentsContainer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "class_", make_descriptor(CommentsContainer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "wrapfn_", make_descriptor(t_CommentsContainer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommentsContainer::initializeClass, 1)))
              return NULL;
            return t_CommentsContainer::wrap_Object(CommentsContainer(((t_CommentsContainer *) arg)->object.this$));
          }
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommentsContainer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds)
          {
            CommentsContainer object((jobject) NULL);

            INT_CALL(object = CommentsContainer());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.acceptComments());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::Object a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jdouble a3;
            jdouble a4;

            if (!parseArgs(args, "DosDD", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.checkAllowed(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkAllowed", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Ds", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNaN(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNaN", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNegative(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNegative", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "os", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNull(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self)
          {
            OBJ_CALL(self->object.refuseFurtherComments());
            Py_RETURN_NONE;
          }

          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EcksteinHechlerPropagatorBuilder::class$ = NULL;
        jmethodID *EcksteinHechlerPropagatorBuilder::mids$ = NULL;
        bool EcksteinHechlerPropagatorBuilder::live$ = false;

        jclass EcksteinHechlerPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79d33b712eca09e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_8c697f63edb41aec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_a9fd3db9acd028e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_0c183831cad84280] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_d4cfcf1c00a12618] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_79d33b712eca09e6, a0.this$, a1.this$, a2.this$, a3)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8c697f63edb41aec, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::orbits::OrbitType & a9, const ::org::orekit::orbits::PositionAngleType & a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_a9fd3db9acd028e4, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8, a9.this$, a10.this$, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EcksteinHechlerPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_2eb3122719704f90], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EcksteinHechlerPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_0c183831cad84280], a0.this$));
        }

        EcksteinHechlerPropagatorBuilder EcksteinHechlerPropagatorBuilder::copy() const
        {
          return EcksteinHechlerPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_d4cfcf1c00a12618]));
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
      namespace conversion {
        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EcksteinHechlerPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagatorBuilder)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagatorBuilder, t_EcksteinHechlerPropagatorBuilder, EcksteinHechlerPropagatorBuilder);

        void t_EcksteinHechlerPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagatorBuilder), &PY_TYPE_DEF(EcksteinHechlerPropagatorBuilder), module, "EcksteinHechlerPropagatorBuilder", 0);
        }

        void t_EcksteinHechlerPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "class_", make_descriptor(EcksteinHechlerPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagatorBuilder::wrap_Object(EcksteinHechlerPropagatorBuilder(((t_EcksteinHechlerPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::orbits::OrbitType a9((jobject) NULL);
              PyTypeObject **p9;
              ::org::orekit::orbits::PositionAngleType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDDKKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::orbits::t_OrbitType::parameters_, &a10, &p10, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a11))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          EcksteinHechlerPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EcksteinHechlerPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegrator::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_e1744134ce9f6676] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegrator::ClassicalRungeKuttaFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ClassicalRungeKuttaFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
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
      namespace nonstiff {
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegrator, t_ClassicalRungeKuttaFieldIntegrator, ClassicalRungeKuttaFieldIntegrator);
        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(const ClassicalRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegrator), module, "ClassicalRungeKuttaFieldIntegrator", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(ClassicalRungeKuttaFieldIntegrator(((t_ClassicalRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ClassicalRungeKuttaFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ClassicalRungeKuttaFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
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
              mids$[mid_getGRAPHICCombination_d7bec929149053a7] = env->getStaticMethodID(cls, "getGRAPHICCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GRAPHICCombination;");
              mids$[mid_getGeometryFreeCombination_402a059c905d285c] = env->getStaticMethodID(cls, "getGeometryFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GeometryFreeCombination;");
              mids$[mid_getIonosphereFreeCombination_1229de4c47e96ea4] = env->getStaticMethodID(cls, "getIonosphereFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/IonosphereFreeCombination;");
              mids$[mid_getMelbourneWubbenaCombination_19fc771d40383d9e] = env->getStaticMethodID(cls, "getMelbourneWubbenaCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination;");
              mids$[mid_getNarrowLaneCombination_07f29255bc3eb116] = env->getStaticMethodID(cls, "getNarrowLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/NarrowLaneCombination;");
              mids$[mid_getPhaseMinusCodeCombination_772c0092ad4a1d41] = env->getStaticMethodID(cls, "getPhaseMinusCodeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination;");
              mids$[mid_getWideLaneCombination_2e88547eebb61d89] = env->getStaticMethodID(cls, "getWideLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/WideLaneCombination;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::GRAPHICCombination MeasurementCombinationFactory::getGRAPHICCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GRAPHICCombination(env->callStaticObjectMethod(cls, mids$[mid_getGRAPHICCombination_d7bec929149053a7], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination MeasurementCombinationFactory::getGeometryFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getGeometryFreeCombination_402a059c905d285c], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination MeasurementCombinationFactory::getIonosphereFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getIonosphereFreeCombination_1229de4c47e96ea4], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination MeasurementCombinationFactory::getMelbourneWubbenaCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination(env->callStaticObjectMethod(cls, mids$[mid_getMelbourneWubbenaCombination_19fc771d40383d9e], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination MeasurementCombinationFactory::getNarrowLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getNarrowLaneCombination_07f29255bc3eb116], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination MeasurementCombinationFactory::getPhaseMinusCodeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination(env->callStaticObjectMethod(cls, mids$[mid_getPhaseMinusCodeCombination_772c0092ad4a1d41], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::WideLaneCombination MeasurementCombinationFactory::getWideLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::WideLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getWideLaneCombination_2e88547eebb61d89], a0.this$));
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
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEStateAndDerivative::class$ = NULL;
      jmethodID *ComplexODEStateAndDerivative::mids$ = NULL;
      bool ComplexODEStateAndDerivative::live$ = false;

      jclass ComplexODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_dc1c7ac732247d3f] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_bea644bb2895ac0d] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteDerivative_8a0770025abeda5b] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryDerivative_8a0770025abeda5b] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryDerivative_8b297114c93ecf96] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_dc1c7ac732247d3f, a0, a1.this$, a2.this$)) {}

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a3, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a4) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_bea644bb2895ac0d, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_8a0770025abeda5b]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_8a0770025abeda5b]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_8b297114c93ecf96], a0));
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
      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ComplexODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ComplexODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ComplexODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ComplexODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ComplexODEState),
        NULL
      };

      DEFINE_TYPE(ComplexODEStateAndDerivative, t_ComplexODEStateAndDerivative, ComplexODEStateAndDerivative);

      void t_ComplexODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEStateAndDerivative), &PY_TYPE_DEF(ComplexODEStateAndDerivative), module, "ComplexODEStateAndDerivative", 0);
      }

      void t_ComplexODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "class_", make_descriptor(ComplexODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "wrapfn_", make_descriptor(t_ComplexODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ComplexODEStateAndDerivative::wrap_Object(ComplexODEStateAndDerivative(((t_ComplexODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a3((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a4((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k[[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/PythonAccuracyProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PythonAccuracyProvider::class$ = NULL;
            jmethodID *PythonAccuracyProvider::mids$ = NULL;
            bool PythonAccuracyProvider::live$ = false;

            jclass PythonAccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PythonAccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAccuracy", "()D");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAccuracyProvider::PythonAccuracyProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonAccuracyProvider::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAccuracyProvider::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAccuracyProvider::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          namespace common {
            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self);
            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args);
            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data);
            static PyGetSetDef t_PythonAccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAccuracyProvider, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_PythonAccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAccuracyProvider, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAccuracyProvider)[] = {
              { Py_tp_methods, t_PythonAccuracyProvider__methods_ },
              { Py_tp_init, (void *) t_PythonAccuracyProvider_init_ },
              { Py_tp_getset, t_PythonAccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonAccuracyProvider, t_PythonAccuracyProvider, PythonAccuracyProvider);

            void t_PythonAccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAccuracyProvider), &PY_TYPE_DEF(PythonAccuracyProvider), module, "PythonAccuracyProvider", 1);
            }

            void t_PythonAccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "class_", make_descriptor(PythonAccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "wrapfn_", make_descriptor(t_PythonAccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAccuracyProvider::initializeClass);
              JNINativeMethod methods[] = {
                { "getAccuracy", "()D", (void *) t_PythonAccuracyProvider_getAccuracy0 },
                { "pythonDecRef", "()V", (void *) t_PythonAccuracyProvider_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_PythonAccuracyProvider::wrap_Object(PythonAccuracyProvider(((t_PythonAccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds)
            {
              PythonAccuracyProvider object((jobject) NULL);

              INT_CALL(object = PythonAccuracyProvider());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAccuracy", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAccuracy", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Rotation::class$ = NULL;
          jmethodID *Rotation::mids$ = NULL;
          bool Rotation::live$ = false;
          Rotation *Rotation::IDENTITY = NULL;

          jclass Rotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Rotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f7d2a24ef2ff591] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_2dc700e70febd4ad] = env->getMethodID(cls, "<init>", "([[DD)V");
              mids$[mid_init$_27dead8fbd68e444] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_6daf871d109886ea] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_97162a3d562c2699] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;DDD)V");
              mids$[mid_init$_1b47bef3b986c422] = env->getMethodID(cls, "<init>", "(DDDDZ)V");
              mids$[mid_applyInverseTo_9f88b874cdb77e92] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyInverseTo_d0fe714ef34714f7] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyInverseTo_e1f4b15468f5564a] = env->getMethodID(cls, "applyInverseTo", "([D[D)V");
              mids$[mid_applyTo_9f88b874cdb77e92] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyTo_d0fe714ef34714f7] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyTo_e1f4b15468f5564a] = env->getMethodID(cls, "applyTo", "([D[D)V");
              mids$[mid_compose_ff6197154b48afce] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_composeInverse_ff6197154b48afce] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_distance_0086305c5b699627] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)D");
              mids$[mid_getAngle_dff5885c2c873297] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getAngles_2d06c337fbfd1b2e] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[D");
              mids$[mid_getAxis_33c6fc5f4328c947] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getMatrix_0358d8ea02f2cdb1] = env->getMethodID(cls, "getMatrix", "()[[D");
              mids$[mid_getQ0_dff5885c2c873297] = env->getMethodID(cls, "getQ0", "()D");
              mids$[mid_getQ1_dff5885c2c873297] = env->getMethodID(cls, "getQ1", "()D");
              mids$[mid_getQ2_dff5885c2c873297] = env->getMethodID(cls, "getQ2", "()D");
              mids$[mid_getQ3_dff5885c2c873297] = env->getMethodID(cls, "getQ3", "()D");
              mids$[mid_revert_de86c7efc42eac14] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDENTITY = new Rotation(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/geometry/euclidean/threed/Rotation;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f7d2a24ef2ff591, a0.this$, a1.this$)) {}

          Rotation::Rotation(const JArray< JArray< jdouble > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2dc700e70febd4ad, a0.this$, a1)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27dead8fbd68e444, a0.this$, a1, a2.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6daf871d109886ea, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_97162a3d562c2699, a0.this$, a1.this$, a2, a3, a4)) {}

          Rotation::Rotation(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b47bef3b986c422, a0, a1, a2, a3, a4)) {}

          Rotation Rotation::applyInverseTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_9f88b874cdb77e92], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_d0fe714ef34714f7], a0.this$));
          }

          void Rotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_e1f4b15468f5564a], a0.this$, a1.this$);
          }

          Rotation Rotation::applyTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyTo_9f88b874cdb77e92], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyTo_d0fe714ef34714f7], a0.this$));
          }

          void Rotation::applyTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_e1f4b15468f5564a], a0.this$, a1.this$);
          }

          Rotation Rotation::compose(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_compose_ff6197154b48afce], a0.this$, a1.this$));
          }

          Rotation Rotation::composeInverse(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_composeInverse_ff6197154b48afce], a0.this$, a1.this$));
          }

          jdouble Rotation::distance(const Rotation & a0, const Rotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_0086305c5b699627], a0.this$, a1.this$);
          }

          jdouble Rotation::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_dff5885c2c873297]);
          }

          JArray< jdouble > Rotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAngles_2d06c337fbfd1b2e], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxis_33c6fc5f4328c947], a0.this$));
          }

          JArray< JArray< jdouble > > Rotation::getMatrix() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getMatrix_0358d8ea02f2cdb1]));
          }

          jdouble Rotation::getQ0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ0_dff5885c2c873297]);
          }

          jdouble Rotation::getQ1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ1_dff5885c2c873297]);
          }

          jdouble Rotation::getQ2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ2_dff5885c2c873297]);
          }

          jdouble Rotation::getQ3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ3_dff5885c2c873297]);
          }

          Rotation Rotation::revert() const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_revert_de86c7efc42eac14]));
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_Rotation_getAngle(t_Rotation *self);
          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg);
          static PyObject *t_Rotation_getMatrix(t_Rotation *self);
          static PyObject *t_Rotation_getQ0(t_Rotation *self);
          static PyObject *t_Rotation_getQ1(t_Rotation *self);
          static PyObject *t_Rotation_getQ2(t_Rotation *self);
          static PyObject *t_Rotation_getQ3(t_Rotation *self);
          static PyObject *t_Rotation_revert(t_Rotation *self);
          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data);
          static PyGetSetDef t_Rotation__fields_[] = {
            DECLARE_GET_FIELD(t_Rotation, angle),
            DECLARE_GET_FIELD(t_Rotation, matrix),
            DECLARE_GET_FIELD(t_Rotation, q0),
            DECLARE_GET_FIELD(t_Rotation, q1),
            DECLARE_GET_FIELD(t_Rotation, q2),
            DECLARE_GET_FIELD(t_Rotation, q3),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Rotation__methods_[] = {
            DECLARE_METHOD(t_Rotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Rotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, getAxis, METH_O),
            DECLARE_METHOD(t_Rotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Rotation)[] = {
            { Py_tp_methods, t_Rotation__methods_ },
            { Py_tp_init, (void *) t_Rotation_init_ },
            { Py_tp_getset, t_Rotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Rotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Rotation, t_Rotation, Rotation);

          void t_Rotation::install(PyObject *module)
          {
            installType(&PY_TYPE(Rotation), &PY_TYPE_DEF(Rotation), module, "Rotation", 0);
          }

          void t_Rotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "class_", make_descriptor(Rotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "wrapfn_", make_descriptor(t_Rotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "boxfn_", make_descriptor(boxObject));
            env->getClass(Rotation::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "IDENTITY", make_descriptor(t_Rotation::wrap_Object(*Rotation::IDENTITY)));
          }

          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Rotation::initializeClass, 1)))
              return NULL;
            return t_Rotation::wrap_Object(Rotation(((t_Rotation *) arg)->object.this$));
          }
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Rotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);
                jdouble a1;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "[[DD", &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = Rotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "KKDDD", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jboolean a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "DDDDZ", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.compose(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.composeInverse(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            Rotation a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Rotation::initializeClass, Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Rotation::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAngle(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_Rotation_getMatrix(t_Rotation *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_getQ0(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ1(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ2(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ3(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_revert(t_Rotation *self)
          {
            Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Rotation::wrap_Object(result);
          }

          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ3());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *AttitudeEphemerisFileParser::mids$ = NULL;
        bool AttitudeEphemerisFileParser::live$ = false;

        jclass AttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_538d2753c07b807c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::AttitudeEphemerisFile AttitudeEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::AttitudeEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_538d2753c07b807c], a0.this$));
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
      namespace general {
        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileParser, t_AttitudeEphemerisFileParser, AttitudeEphemerisFileParser);
        PyObject *t_AttitudeEphemerisFileParser::wrap_Object(const AttitudeEphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileParser), &PY_TYPE_DEF(AttitudeEphemerisFileParser), module, "AttitudeEphemerisFileParser", 0);
        }

        void t_AttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "class_", make_descriptor(AttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileParser::wrap_Object(AttitudeEphemerisFileParser(((t_AttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::AttitudeEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Incrementor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationProblem::class$ = NULL;
      jmethodID *OptimizationProblem::mids$ = NULL;
      bool OptimizationProblem::live$ = false;

      jclass OptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_c0e8b85b3220641b] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker OptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_c0e8b85b3220641b]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_b6dd60d8c3af0cf7]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_b6dd60d8c3af0cf7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args);
      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data);
      static PyGetSetDef t_OptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_OptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_OptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_OptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_OptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationProblem)[] = {
        { Py_tp_methods, t_OptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationProblem, t_OptimizationProblem, OptimizationProblem);
      PyObject *t_OptimizationProblem::wrap_Object(const OptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationProblem), &PY_TYPE_DEF(OptimizationProblem), module, "OptimizationProblem", 0);
      }

      void t_OptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "class_", make_descriptor(OptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "wrapfn_", make_descriptor(t_OptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_OptimizationProblem::wrap_Object(OptimizationProblem(((t_OptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooter::class$ = NULL;
      jmethodID *MultipleShooter::mids$ = NULL;
      bool MultipleShooter::live$ = false;

      jclass MultipleShooter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_15f1e1aa5c607e00] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
          mids$[mid_getAugmentedInitialState_8f68ada11fb66675] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_computeAdditionalJacobianMatrix_11c2223c723fd443] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_computeAdditionalConstraints_ae31e5696ec6455b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultipleShooter::MultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_15f1e1aa5c607e00, a0.this$, a1.this$, a2.this$, a3, a4)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MultipleShooter__methods_[] = {
        DECLARE_METHOD(t_MultipleShooter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooter)[] = {
        { Py_tp_methods, t_MultipleShooter__methods_ },
        { Py_tp_init, (void *) t_MultipleShooter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooter)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(MultipleShooter, t_MultipleShooter, MultipleShooter);

      void t_MultipleShooter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooter), &PY_TYPE_DEF(MultipleShooter), module, "MultipleShooter", 0);
      }

      void t_MultipleShooter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "class_", make_descriptor(MultipleShooter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "wrapfn_", make_descriptor(t_MultipleShooter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooter::initializeClass, 1)))
          return NULL;
        return t_MultipleShooter::wrap_Object(MultipleShooter(((t_MultipleShooter *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::util::List a2((jobject) NULL);
        PyTypeObject **p2;
        jdouble a3;
        jint a4;
        MultipleShooter object((jobject) NULL);

        if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
        {
          INT_CALL(object = MultipleShooter(a0, a1, a2, a3, a4));
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
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorBuilder::class$ = NULL;
        jmethodID *KalmanEstimatorBuilder::mids$ = NULL;
        bool KalmanEstimatorBuilder::live$ = false;

        jclass KalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_61fe9d340683de4c] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_build_55dabf57465c9f6d] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/KalmanEstimator;");
            mids$[mid_decomposer_1c41ab74406b8fc8] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_07ea1a66b45abd16] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanEstimatorBuilder::KalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        KalmanEstimatorBuilder KalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_61fe9d340683de4c], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::KalmanEstimator KalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::KalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_55dabf57465c9f6d]));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_1c41ab74406b8fc8], a0.this$));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_07ea1a66b45abd16], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self);
        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_KalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_KalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorBuilder, t_KalmanEstimatorBuilder, KalmanEstimatorBuilder);

        void t_KalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorBuilder), &PY_TYPE_DEF(KalmanEstimatorBuilder), module, "KalmanEstimatorBuilder", 0);
        }

        void t_KalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "class_", make_descriptor(KalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_KalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorBuilder::wrap_Object(KalmanEstimatorBuilder(((t_KalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          KalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = KalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::KalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_KalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateTroposphericDelayModifier::mids$ = NULL;
          bool RangeRateTroposphericDelayModifier::live$ = false;

          jclass RangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2b1e044f2f09ecad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;Z)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorTroposphericModel_08d2a35aee39232b] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_03cd5a2e88a0f0f6] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateTroposphericDelayModifier::RangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0, jboolean a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_2b1e044f2f09ecad, a0.this$, a1)) {}

          void RangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void RangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
          }

          jdouble RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_08d2a35aee39232b], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_03cd5a2e88a0f0f6], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args);

          static PyMethodDef t_RangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateTroposphericDelayModifier, t_RangeRateTroposphericDelayModifier, RangeRateTroposphericDelayModifier);

          void t_RangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateTroposphericDelayModifier), &PY_TYPE_DEF(RangeRateTroposphericDelayModifier), module, "RangeRateTroposphericDelayModifier", 0);
          }

          void t_RangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "class_", make_descriptor(RangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateTroposphericDelayModifier::wrap_Object(RangeRateTroposphericDelayModifier(((t_RangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            jboolean a1;
            RangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeRateTroposphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(RangeRateTroposphericDelayModifier), (PyObject *) self, "rangeRateErrorTroposphericModel", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "java/lang/Iterable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbStation::class$ = NULL;
        jmethodID *DcbStation::mids$ = NULL;
        bool DcbStation::live$ = false;

        jclass DcbStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addDcb_9240f9c21af74bfa] = env->getMethodID(cls, "addDcb", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/sinex/Dcb;)V");
            mids$[mid_getAvailableSatelliteSystems_3bed2e1062489236] = env->getMethodID(cls, "getAvailableSatelliteSystems", "()Ljava/lang/Iterable;");
            mids$[mid_getDcbData_39258d6e17eda633] = env->getMethodID(cls, "getDcbData", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_b66783625d13e607] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getSiteCode_11b109bd155ca898] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_setDescription_c7a638e3ab0f92d6] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbStation::DcbStation(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

        void DcbStation::addDcb(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::sinex::Dcb & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcb_9240f9c21af74bfa], a0.this$, a1.this$);
        }

        ::java::lang::Iterable DcbStation::getAvailableSatelliteSystems() const
        {
          return ::java::lang::Iterable(env->callObjectMethod(this$, mids$[mid_getAvailableSatelliteSystems_3bed2e1062489236]));
        }

        ::org::orekit::files::sinex::Dcb DcbStation::getDcbData(const ::org::orekit::gnss::SatelliteSystem & a0) const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_39258d6e17eda633], a0.this$));
        }

        ::org::orekit::files::sinex::DcbDescription DcbStation::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_b66783625d13e607]));
        }

        ::java::lang::String DcbStation::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_11b109bd155ca898]));
        }

        void DcbStation::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_c7a638e3ab0f92d6], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args);
        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self);
        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_getDescription(t_DcbStation *self);
        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self);
        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data);
        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data);
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data);
        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data);
        static PyGetSetDef t_DcbStation__fields_[] = {
          DECLARE_GET_FIELD(t_DcbStation, availableSatelliteSystems),
          DECLARE_GETSET_FIELD(t_DcbStation, description),
          DECLARE_GET_FIELD(t_DcbStation, siteCode),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbStation__methods_[] = {
          DECLARE_METHOD(t_DcbStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, addDcb, METH_VARARGS),
          DECLARE_METHOD(t_DcbStation, getAvailableSatelliteSystems, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getDcbData, METH_O),
          DECLARE_METHOD(t_DcbStation, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbStation)[] = {
          { Py_tp_methods, t_DcbStation__methods_ },
          { Py_tp_init, (void *) t_DcbStation_init_ },
          { Py_tp_getset, t_DcbStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbStation, t_DcbStation, DcbStation);

        void t_DcbStation::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbStation), &PY_TYPE_DEF(DcbStation), module, "DcbStation", 0);
        }

        void t_DcbStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "class_", make_descriptor(DcbStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "wrapfn_", make_descriptor(t_DcbStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbStation::initializeClass, 1)))
            return NULL;
          return t_DcbStation::wrap_Object(DcbStation(((t_DcbStation *) arg)->object.this$));
        }
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbStation object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbStation(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::sinex::Dcb::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(self->object.addDcb(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcb", args);
          return NULL;
        }

        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self)
        {
          ::java::lang::Iterable result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatelliteSystem));
        }

        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
          {
            OBJ_CALL(result = self->object.getDcbData(a0));
            return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbData", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_getDescription(t_DcbStation *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data)
        {
          ::java::lang::Iterable value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(value);
        }

        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *MeasurementFilter::class$ = NULL;
          jmethodID *MeasurementFilter::mids$ = NULL;
          bool MeasurementFilter::live$ = false;

          jclass MeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/MeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_filter_ba898b75be14e8ca] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_ba898b75be14e8ca], a0.this$, a1.this$);
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
        namespace filtering {
          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data);
          static PyGetSetDef t_MeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_MeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementFilter)[] = {
            { Py_tp_methods, t_MeasurementFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementFilter, t_MeasurementFilter, MeasurementFilter);
          PyObject *t_MeasurementFilter::wrap_Object(const MeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementFilter), &PY_TYPE_DEF(MeasurementFilter), module, "MeasurementFilter", 0);
          }

          void t_MeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "class_", make_descriptor(MeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "wrapfn_", make_descriptor(t_MeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_MeasurementFilter::wrap_Object(MeasurementFilter(((t_MeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistory::class$ = NULL;
              jmethodID *TrajectoryStateHistory::mids$ = NULL;
              bool TrajectoryStateHistory::live$ = false;

              jclass TrajectoryStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1a4c23d6f5282fcc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Ljava/util/List;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                  mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getBody_000d48aad6c74b0a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
                  mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_1fe510d4fbfbe0c9] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajectoryStates_2afa36052df4765d] = env->getMethodID(cls, "getTrajectoryStates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistory::TrajectoryStateHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a0, const ::java::util::List & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a4c23d6f5282fcc, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
              }

              ::org::orekit::bodies::OneAxisEllipsoid TrajectoryStateHistory::getBody() const
              {
                return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_000d48aad6c74b0a]));
              }

              ::java::util::List TrajectoryStateHistory::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
              }

              ::org::orekit::frames::Frame TrajectoryStateHistory::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
              }

              jint TrajectoryStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata TrajectoryStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_1fe510d4fbfbe0c9]));
              }

              jdouble TrajectoryStateHistory::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
              }

              ::java::util::List TrajectoryStateHistory::getTrajectoryStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryStates_2afa36052df4765d]));
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
            namespace ocm {
              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, body),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, coordinates),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, frame),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, metadata),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, mu),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, start),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, stop),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, trajectoryStates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistory__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getBody, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMu, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStop, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getTrajectoryStates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistory)[] = {
                { Py_tp_methods, t_TrajectoryStateHistory__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistory_init_ },
                { Py_tp_getset, t_TrajectoryStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistory, t_TrajectoryStateHistory, TrajectoryStateHistory);

              void t_TrajectoryStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistory), &PY_TYPE_DEF(TrajectoryStateHistory), module, "TrajectoryStateHistory", 0);
              }

              void t_TrajectoryStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "class_", make_descriptor(TrajectoryStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "wrapfn_", make_descriptor(t_TrajectoryStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistory::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistory::wrap_Object(TrajectoryStateHistory(((t_TrajectoryStateHistory *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                TrajectoryStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kKkD", ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
                {
                  INT_CALL(object = TrajectoryStateHistory(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
                OBJ_CALL(result = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryState));
              }

              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
                OBJ_CALL(value = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/optim/linear/LinearOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearOptimizer::class$ = NULL;
        jmethodID *LinearOptimizer::mids$ = NULL;
        bool LinearOptimizer::live$ = false;

        jclass LinearOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_getConstraints_37528d110cff6b74] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");
            mids$[mid_isRestrictedToNonNegative_b108b35ef48e27bd] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");
            mids$[mid_getFunction_2183057fc5330a32] = env->getMethodID(cls, "getFunction", "()Lorg/hipparchus/optim/linear/LinearObjectiveFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::PointValuePair LinearOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
    namespace optim {
      namespace linear {
        static PyObject *t_LinearOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearOptimizer_of_(t_LinearOptimizer *self, PyObject *args);
        static PyObject *t_LinearOptimizer_optimize(t_LinearOptimizer *self, PyObject *args);
        static PyObject *t_LinearOptimizer_get__parameters_(t_LinearOptimizer *self, void *data);
        static PyGetSetDef t_LinearOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_LinearOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearOptimizer__methods_[] = {
          DECLARE_METHOD(t_LinearOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_LinearOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearOptimizer)[] = {
          { Py_tp_methods, t_LinearOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LinearOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(LinearOptimizer, t_LinearOptimizer, LinearOptimizer);
        PyObject *t_LinearOptimizer::wrap_Object(const LinearOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LinearOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LinearOptimizer *self = (t_LinearOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LinearOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LinearOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LinearOptimizer *self = (t_LinearOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LinearOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearOptimizer), &PY_TYPE_DEF(LinearOptimizer), module, "LinearOptimizer", 0);
        }

        void t_LinearOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearOptimizer), "class_", make_descriptor(LinearOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearOptimizer), "wrapfn_", make_descriptor(t_LinearOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearOptimizer::initializeClass, 1)))
            return NULL;
          return t_LinearOptimizer::wrap_Object(LinearOptimizer(((t_LinearOptimizer *) arg)->object.this$));
        }
        static PyObject *t_LinearOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LinearOptimizer_of_(t_LinearOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_LinearOptimizer_optimize(t_LinearOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(LinearOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_LinearOptimizer_get__parameters_(t_LinearOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *StorelessCovariance::class$ = NULL;
        jmethodID *StorelessCovariance::mids$ = NULL;
        bool StorelessCovariance::live$ = false;

        jclass StorelessCovariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/StorelessCovariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_f61a0322e15bde25] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_append_b79f135bd5c26485] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/correlation/StorelessCovariance;)V");
            mids$[mid_getCovariance_dbbe5f05149dbf73] = env->getMethodID(cls, "getCovariance", "(II)D");
            mids$[mid_getCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getData_0358d8ea02f2cdb1] = env->getMethodID(cls, "getData", "()[[D");
            mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_increment_fa9d415d19f69361] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StorelessCovariance::StorelessCovariance(jint a0) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        StorelessCovariance::StorelessCovariance(jint a0, jboolean a1) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_f61a0322e15bde25, a0, a1)) {}

        void StorelessCovariance::append(const StorelessCovariance & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_b79f135bd5c26485], a0.this$);
        }

        jdouble StorelessCovariance::getCovariance(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovariance_dbbe5f05149dbf73], a0, a1);
        }

        ::org::hipparchus::linear::RealMatrix StorelessCovariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_688b496048ff947b]));
        }

        JArray< JArray< jdouble > > StorelessCovariance::getData() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_0358d8ea02f2cdb1]));
        }

        jint StorelessCovariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
        }

        void StorelessCovariance::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_fa9d415d19f69361], a0.this$);
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
      namespace correlation {
        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self);
        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data);
        static PyGetSetDef t_StorelessCovariance__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessCovariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_StorelessCovariance, data),
          DECLARE_GET_FIELD(t_StorelessCovariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessCovariance__methods_[] = {
          DECLARE_METHOD(t_StorelessCovariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, append, METH_O),
          DECLARE_METHOD(t_StorelessCovariance, getCovariance, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getCovarianceMatrix, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getData, METH_NOARGS),
          DECLARE_METHOD(t_StorelessCovariance, getN, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessCovariance)[] = {
          { Py_tp_methods, t_StorelessCovariance__methods_ },
          { Py_tp_init, (void *) t_StorelessCovariance_init_ },
          { Py_tp_getset, t_StorelessCovariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessCovariance)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::correlation::Covariance),
          NULL
        };

        DEFINE_TYPE(StorelessCovariance, t_StorelessCovariance, StorelessCovariance);

        void t_StorelessCovariance::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessCovariance), &PY_TYPE_DEF(StorelessCovariance), module, "StorelessCovariance", 0);
        }

        void t_StorelessCovariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "class_", make_descriptor(StorelessCovariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "wrapfn_", make_descriptor(t_StorelessCovariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessCovariance::initializeClass, 1)))
            return NULL;
          return t_StorelessCovariance::wrap_Object(StorelessCovariance(((t_StorelessCovariance *) arg)->object.this$));
        }
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessCovariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = StorelessCovariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = StorelessCovariance(a0, a1));
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

        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg)
        {
          StorelessCovariance a0((jobject) NULL);

          if (!parseArg(arg, "k", StorelessCovariance::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovariance(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", args);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getCovarianceMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getCovarianceMatrix", args, 2);
        }

        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getN", args, 2);
        }

        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFParser::class$ = NULL;
        jmethodID *CPFParser::mids$ = NULL;
        bool CPFParser::live$ = false;

        jclass CPFParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_163f3b0d24a46ec0] = env->getMethodID(cls, "<init>", "(DILorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frames;)V");
            mids$[mid_parse_dee58abd47ccba2d] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CPF;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFParser::CPFParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        CPFParser::CPFParser(jdouble a0, jint a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frames & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_163f3b0d24a46ec0, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::files::ilrs::CPF CPFParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CPF(env->callObjectMethod(this$, mids$[mid_parse_dee58abd47ccba2d], a0.this$));
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
      namespace ilrs {
        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg);

        static PyMethodDef t_CPFParser__methods_[] = {
          DECLARE_METHOD(t_CPFParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFParser)[] = {
          { Py_tp_methods, t_CPFParser__methods_ },
          { Py_tp_init, (void *) t_CPFParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFParser, t_CPFParser, CPFParser);

        void t_CPFParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFParser), &PY_TYPE_DEF(CPFParser), module, "CPFParser", 0);
        }

        void t_CPFParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "class_", make_descriptor(CPFParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "wrapfn_", make_descriptor(t_CPFParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFParser::initializeClass, 1)))
            return NULL;
          return t_CPFParser::wrap_Object(CPFParser(((t_CPFParser *) arg)->object.this$));
        }
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CPFParser object((jobject) NULL);

              INT_CALL(object = CPFParser());
              self->object = object;
              break;
            }
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::frames::Frames a4((jobject) NULL);
              CPFParser object((jobject) NULL);

              if (!parseArgs(args, "DIKkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
              {
                INT_CALL(object = CPFParser(a0, a1, a2, a3, a4));
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

        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CPF::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/NaturalRanking.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaturalRanking::class$ = NULL;
        jmethodID *NaturalRanking::mids$ = NULL;
        bool NaturalRanking::live$ = false;
        ::org::hipparchus::stat::ranking::NaNStrategy *NaturalRanking::DEFAULT_NAN_STRATEGY = NULL;
        ::org::hipparchus::stat::ranking::TiesStrategy *NaturalRanking::DEFAULT_TIES_STRATEGY = NULL;

        jclass NaturalRanking::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaturalRanking");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_dd099107a84a1a1b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)V");
            mids$[mid_init$_c837e5ae3e5acc4c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_ed87323846b88129] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_35f8015fd6028894] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getNanStrategy_884e0da06e21afce] = env->getMethodID(cls, "getNanStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_getTiesStrategy_e75cf41139182548] = env->getMethodID(cls, "getTiesStrategy", "()Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_rank_ac3d742ccc742f22] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_NAN_STRATEGY = new ::org::hipparchus::stat::ranking::NaNStrategy(env->getStaticObjectField(cls, "DEFAULT_NAN_STRATEGY", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            DEFAULT_TIES_STRATEGY = new ::org::hipparchus::stat::ranking::TiesStrategy(env->getStaticObjectField(cls, "DEFAULT_TIES_STRATEGY", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaturalRanking::NaturalRanking() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd099107a84a1a1b, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::TiesStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c837e5ae3e5acc4c, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed87323846b88129, a0.this$, a1.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35f8015fd6028894, a0.this$, a1.this$)) {}

        ::org::hipparchus::stat::ranking::NaNStrategy NaturalRanking::getNanStrategy() const
        {
          return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNanStrategy_884e0da06e21afce]));
        }

        ::org::hipparchus::stat::ranking::TiesStrategy NaturalRanking::getTiesStrategy() const
        {
          return ::org::hipparchus::stat::ranking::TiesStrategy(env->callObjectMethod(this$, mids$[mid_getTiesStrategy_e75cf41139182548]));
        }

        JArray< jdouble > NaturalRanking::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_ac3d742ccc742f22], a0.this$));
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
      namespace ranking {
        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg);
        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data);
        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data);
        static PyGetSetDef t_NaturalRanking__fields_[] = {
          DECLARE_GET_FIELD(t_NaturalRanking, nanStrategy),
          DECLARE_GET_FIELD(t_NaturalRanking, tiesStrategy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaturalRanking__methods_[] = {
          DECLARE_METHOD(t_NaturalRanking, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, getNanStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, getTiesStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaturalRanking)[] = {
          { Py_tp_methods, t_NaturalRanking__methods_ },
          { Py_tp_init, (void *) t_NaturalRanking_init_ },
          { Py_tp_getset, t_NaturalRanking__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaturalRanking)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NaturalRanking, t_NaturalRanking, NaturalRanking);

        void t_NaturalRanking::install(PyObject *module)
        {
          installType(&PY_TYPE(NaturalRanking), &PY_TYPE_DEF(NaturalRanking), module, "NaturalRanking", 0);
        }

        void t_NaturalRanking::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "class_", make_descriptor(NaturalRanking::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "wrapfn_", make_descriptor(t_NaturalRanking::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaturalRanking::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_NAN_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(*NaturalRanking::DEFAULT_NAN_STRATEGY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_TIES_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(*NaturalRanking::DEFAULT_TIES_STRATEGY)));
        }

        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaturalRanking::initializeClass, 1)))
            return NULL;
          return t_NaturalRanking::wrap_Object(NaturalRanking(((t_NaturalRanking *) arg)->object.this$));
        }
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaturalRanking::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NaturalRanking object((jobject) NULL);

              INT_CALL(object = NaturalRanking());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::TiesStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
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

        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }

        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
        }

        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *EnumeratedIntegerDistribution::class$ = NULL;
        jmethodID *EnumeratedIntegerDistribution::mids$ = NULL;
        bool EnumeratedIntegerDistribution::live$ = false;

        jclass EnumeratedIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
            mids$[mid_init$_7847f5fdfa3f26f7] = env->getMethodID(cls, "<init>", "([I[D)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_2afa36052df4765d] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_7847f5fdfa3f26f7, a0.this$, a1.this$)) {}

        jdouble EnumeratedIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        ::java::util::List EnumeratedIntegerDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_2afa36052df4765d]));
        }

        jint EnumeratedIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint EnumeratedIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean EnumeratedIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble EnumeratedIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedIntegerDistribution)[] = {
          { Py_tp_methods, t_EnumeratedIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedIntegerDistribution_init_ },
          { Py_tp_getset, t_EnumeratedIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedIntegerDistribution, t_EnumeratedIntegerDistribution, EnumeratedIntegerDistribution);

        void t_EnumeratedIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedIntegerDistribution), &PY_TYPE_DEF(EnumeratedIntegerDistribution), module, "EnumeratedIntegerDistribution", 0);
        }

        void t_EnumeratedIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "class_", make_descriptor(EnumeratedIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "wrapfn_", make_descriptor(t_EnumeratedIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedIntegerDistribution::wrap_Object(EnumeratedIntegerDistribution(((t_EnumeratedIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jint > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0, a1));
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

        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonFieldOrekitStepInterpolator::mids$ = NULL;
        bool PythonFieldOrekitStepInterpolator::live$ = false;

        jclass PythonFieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_02cea343d9f71933] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_f6f1ea8aef3019eb] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPreviousState_02cea343d9f71933] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_7098fa5da93d95de] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepInterpolator::PythonFieldOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldOrekitStepInterpolator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self);
        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepInterpolator, t_PythonFieldOrekitStepInterpolator, PythonFieldOrekitStepInterpolator);
        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_Object(const PythonFieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepInterpolator), &PY_TYPE_DEF(PythonFieldOrekitStepInterpolator), module, "PythonFieldOrekitStepInterpolator", 1);
        }

        void t_PythonFieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "class_", make_descriptor(PythonFieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getPreviousState2 },
            { "isForward", "()Z", (void *) t_PythonFieldOrekitStepInterpolator_isForward3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepInterpolator_pythonDecRef4 },
            { "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;", (void *) t_PythonFieldOrekitStepInterpolator_restrictStep5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepInterpolator::wrap_Object(PythonFieldOrekitStepInterpolator(((t_PythonFieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *CodeBias::class$ = NULL;
            jmethodID *CodeBias::mids$ = NULL;
            bool CodeBias::live$ = false;

            jclass CodeBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/CodeBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_getCodeBias_dff5885c2c873297] = env->getMethodID(cls, "getCodeBias", "()D");
                mids$[mid_getSignalID_570ce0828f81a2c1] = env->getMethodID(cls, "getSignalID", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CodeBias::CodeBias(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

            jdouble CodeBias::getCodeBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCodeBias_dff5885c2c873297]);
            }

            jint CodeBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_570ce0828f81a2c1]);
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
          namespace common {
            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self);
            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self);
            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data);
            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data);
            static PyGetSetDef t_CodeBias__fields_[] = {
              DECLARE_GET_FIELD(t_CodeBias, codeBias),
              DECLARE_GET_FIELD(t_CodeBias, signalID),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CodeBias__methods_[] = {
              DECLARE_METHOD(t_CodeBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, getCodeBias, METH_NOARGS),
              DECLARE_METHOD(t_CodeBias, getSignalID, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CodeBias)[] = {
              { Py_tp_methods, t_CodeBias__methods_ },
              { Py_tp_init, (void *) t_CodeBias_init_ },
              { Py_tp_getset, t_CodeBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CodeBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CodeBias, t_CodeBias, CodeBias);

            void t_CodeBias::install(PyObject *module)
            {
              installType(&PY_TYPE(CodeBias), &PY_TYPE_DEF(CodeBias), module, "CodeBias", 0);
            }

            void t_CodeBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "class_", make_descriptor(CodeBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "wrapfn_", make_descriptor(t_CodeBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CodeBias::initializeClass, 1)))
                return NULL;
              return t_CodeBias::wrap_Object(CodeBias(((t_CodeBias *) arg)->object.this$));
            }
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CodeBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              CodeBias object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = CodeBias(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCodeBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCodeBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
