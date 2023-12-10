#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addFilter_2665e0a82c5f5a0d] = env->getMethodID(cls, "addFilter", "(Lorg/orekit/data/DataFilter;)V");
          mids$[mid_applyRelevantFilters_446488bfc679a21b] = env->getMethodID(cls, "applyRelevantFilters", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_clearFilters_7ae3461a92a43152] = env->getMethodID(cls, "clearFilters", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FiltersManager::FiltersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void FiltersManager::addFilter(const ::org::orekit::data::DataFilter & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addFilter_2665e0a82c5f5a0d], a0.this$);
      }

      ::org::orekit::data::DataSource FiltersManager::applyRelevantFilters(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_applyRelevantFilters_446488bfc679a21b], a0.this$));
      }

      void FiltersManager::clearFilters() const
      {
        env->callVoidMethod(this$, mids$[mid_clearFilters_7ae3461a92a43152]);
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
#include "org/hipparchus/linear/CholeskyDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposition::class$ = NULL;
      jmethodID *CholeskyDecomposition::mids$ = NULL;
      bool CholeskyDecomposition::live$ = false;
      jdouble CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = (jdouble) 0;
      jdouble CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = (jdouble) 0;

      jclass CholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_2a8094c6f160f8a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DD)V");
          mids$[mid_getDeterminant_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_7116bbecdd8ceb21] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_7116bbecdd8ceb21] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_73ddb95911119e87] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD");
          DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a8094c6f160f8a5, a0.this$, a1, a2)) {}

      jdouble CholeskyDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_73ddb95911119e87]));
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
      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data);
      static PyGetSetDef t_CholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_CholeskyDecomposition, determinant),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, lT),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getLT, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposition)[] = {
        { Py_tp_methods, t_CholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposition_init_ },
        { Py_tp_getset, t_CholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposition, t_CholeskyDecomposition, CholeskyDecomposition);

      void t_CholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposition), &PY_TYPE_DEF(CholeskyDecomposition), module, "CholeskyDecomposition", 0);
      }

      void t_CholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "class_", make_descriptor(CholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "wrapfn_", make_descriptor(t_CholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(CholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD));
      }

      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposition::wrap_Object(CholeskyDecomposition(((t_CholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = CholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CholeskyDecomposition(a0, a1, a2));
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

      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *Atmosphere::class$ = NULL;
          jmethodID *Atmosphere::mids$ = NULL;
          bool Atmosphere::live$ = false;

          jclass Atmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/Atmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_4aa5ce694a02c205] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getVelocity_8f4e8542665c98ee] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement Atmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e3f5c4474b151066], a0.this$, a1.this$, a2.this$));
          }

          jdouble Atmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_ee5ac6667b0d4b90], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame Atmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Atmosphere::getVelocity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_4aa5ce694a02c205], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Atmosphere::getVelocity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_8f4e8542665c98ee], a0.this$, a1.this$, a2.this$));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self);
          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data);
          static PyGetSetDef t_Atmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_Atmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Atmosphere__methods_[] = {
            DECLARE_METHOD(t_Atmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_Atmosphere, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_Atmosphere, getVelocity, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Atmosphere)[] = {
            { Py_tp_methods, t_Atmosphere__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Atmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Atmosphere)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(Atmosphere, t_Atmosphere, Atmosphere);

          void t_Atmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(Atmosphere), &PY_TYPE_DEF(Atmosphere), module, "Atmosphere", 0);
          }

          void t_Atmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "class_", make_descriptor(Atmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "wrapfn_", make_descriptor(t_Atmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Atmosphere::initializeClass, 1)))
              return NULL;
            return t_Atmosphere::wrap_Object(Atmosphere(((t_Atmosphere *) arg)->object.this$));
          }
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Atmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getVelocity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042Data::class$ = NULL;
              jmethodID *Rtcm1042Data::mids$ = NULL;
              bool Rtcm1042Data::live$ = false;

              jclass Rtcm1042Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getBeidouNavigationMessage_1d979c778f1a4280] = env->getMethodID(cls, "getBeidouNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouNavigationMessage_abc81d14b4d75493] = env->getMethodID(cls, "getBeidouNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeidouToc", "()D");
                  mids$[mid_getSvHealth_456d9a2f64d6b28d] = env->getMethodID(cls, "getSvHealth", "()D");
                  mids$[mid_setBeidouNavigationMessage_1df5a8e3672c5ba9] = env->getMethodID(cls, "setBeidouNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
                  mids$[mid_setBeidouToc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBeidouToc", "(D)V");
                  mids$[mid_setSvHealth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSvHealth", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042Data::Rtcm1042Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_1d979c778f1a4280]));
              }

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_abc81d14b4d75493], a0.this$));
              }

              jdouble Rtcm1042Data::getBeidouToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeidouToc_456d9a2f64d6b28d]);
              }

              jdouble Rtcm1042Data::getSvHealth() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSvHealth_456d9a2f64d6b28d]);
              }

              void Rtcm1042Data::setBeidouNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouNavigationMessage_1df5a8e3672c5ba9], a0.this$);
              }

              void Rtcm1042Data::setBeidouToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouToc_77e0f9a1f260e2e5], a0);
              }

              void Rtcm1042Data::setSvHealth(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSvHealth_77e0f9a1f260e2e5], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args);
              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1042Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouToc),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, svHealth),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getSvHealth, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouToc, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setSvHealth, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042Data)[] = {
                { Py_tp_methods, t_Rtcm1042Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042Data_init_ },
                { Py_tp_getset, t_Rtcm1042Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1042Data, t_Rtcm1042Data, Rtcm1042Data);

              void t_Rtcm1042Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042Data), &PY_TYPE_DEF(Rtcm1042Data), module, "Rtcm1042Data", 0);
              }

              void t_Rtcm1042Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "class_", make_descriptor(Rtcm1042Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "wrapfn_", make_descriptor(t_Rtcm1042Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042Data::wrap_Object(Rtcm1042Data(((t_Rtcm1042Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1042Data object((jobject) NULL);

                INT_CALL(object = Rtcm1042Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getBeidouNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getBeidouNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getBeidouNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSvHealth());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setBeidouNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeidouToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSvHealth(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getBeidouNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setBeidouNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeidouToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouToc", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSvHealth());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSvHealth(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiEllipticBuilder::class$ = NULL;
          jmethodID *JacobiEllipticBuilder::mids$ = NULL;
          bool JacobiEllipticBuilder::live$ = false;

          jclass JacobiEllipticBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_5dc5f35c3e5fd887] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_ecef021f0b168079] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_50146fb82d94f0f6] = env->getStaticMethodID(cls, "build", "(D)Lorg/hipparchus/special/elliptic/jacobi/JacobiElliptic;");
              mids$[mid_build_f4644affeb985c99] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_5dc5f35c3e5fd887], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_ecef021f0b168079], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic JacobiEllipticBuilder::build(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_50146fb82d94f0f6], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_f4644affeb985c99], a0.this$));
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
          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_JacobiEllipticBuilder__methods_[] = {
            DECLARE_METHOD(t_JacobiEllipticBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, build, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiEllipticBuilder)[] = {
            { Py_tp_methods, t_JacobiEllipticBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiEllipticBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiEllipticBuilder, t_JacobiEllipticBuilder, JacobiEllipticBuilder);

          void t_JacobiEllipticBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiEllipticBuilder), &PY_TYPE_DEF(JacobiEllipticBuilder), module, "JacobiEllipticBuilder", 0);
          }

          void t_JacobiEllipticBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "class_", make_descriptor(JacobiEllipticBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "wrapfn_", make_descriptor(t_JacobiEllipticBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiEllipticBuilder::initializeClass, 1)))
              return NULL;
            return t_JacobiEllipticBuilder::wrap_Object(JacobiEllipticBuilder(((t_JacobiEllipticBuilder *) arg)->object.this$));
          }
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiEllipticBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_JacobiElliptic::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "build", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStateInterpolator::class$ = NULL;
        jmethodID *FieldODEStateInterpolator::mids$ = NULL;
        bool FieldODEStateInterpolator::live$ = false;

        jclass FieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_05327270bfa02fcd] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_f1f1c5e26e98a1d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_05327270bfa02fcd], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_f1f1c5e26e98a1d9]));
        }

        jboolean FieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db]);
        }

        jboolean FieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        jboolean FieldODEStateInterpolator::isPreviousStateInterpolated() const
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
        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_FieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_FieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStateInterpolator, t_FieldODEStateInterpolator, FieldODEStateInterpolator);
        PyObject *t_FieldODEStateInterpolator::wrap_Object(const FieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStateInterpolator), &PY_TYPE_DEF(FieldODEStateInterpolator), module, "FieldODEStateInterpolator", 0);
        }

        void t_FieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "class_", make_descriptor(FieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "wrapfn_", make_descriptor(t_FieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldODEStateInterpolator::wrap_Object(FieldODEStateInterpolator(((t_FieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
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
#include "org/orekit/propagation/events/FieldAltitudeDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAltitudeDetector::class$ = NULL;
        jmethodID *FieldAltitudeDetector::mids$ = NULL;
        bool FieldAltitudeDetector::live$ = false;

        jclass FieldAltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a998b8675f61545e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_48e1ab7629a8c2a4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_6cbd24da1a73ca86] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAltitude_e6d4d3215c30992a] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBodyShape_883d26889ee03ca8] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_452ae8def470195c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a998b8675f61545e, a0.this$, a1.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_48e1ab7629a8c2a4, a0.this$, a1.this$, a2.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6cbd24da1a73ca86, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::getAltitude() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_e6d4d3215c30992a]));
        }

        ::org::orekit::bodies::BodyShape FieldAltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_883d26889ee03ca8]));
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
      namespace events {
        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args);
        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args);
        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data);
        static PyGetSetDef t_FieldAltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAltitudeDetector)[] = {
          { Py_tp_methods, t_FieldAltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAltitudeDetector_init_ },
          { Py_tp_getset, t_FieldAltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldAltitudeDetector, t_FieldAltitudeDetector, FieldAltitudeDetector);
        PyObject *t_FieldAltitudeDetector::wrap_Object(const FieldAltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAltitudeDetector), &PY_TYPE_DEF(FieldAltitudeDetector), module, "FieldAltitudeDetector", 0);
        }

        void t_FieldAltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "class_", make_descriptor(FieldAltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "wrapfn_", make_descriptor(t_FieldAltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAltitudeDetector::wrap_Object(FieldAltitudeDetector(((t_FieldAltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAltitude());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAltitude());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonJ2SquaredModel::class$ = NULL;
            jmethodID *PythonJ2SquaredModel::mids$ = NULL;
            bool PythonJ2SquaredModel::live$ = false;

            jclass PythonJ2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_e32239e65f2894b6] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_567add3558894c9e] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonJ2SquaredModel::PythonJ2SquaredModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonJ2SquaredModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonJ2SquaredModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonJ2SquaredModel::pythonExtension(jlong a0) const
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
            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self);
            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data);
            static PyGetSetDef t_PythonJ2SquaredModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonJ2SquaredModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonJ2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_PythonJ2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonJ2SquaredModel)[] = {
              { Py_tp_methods, t_PythonJ2SquaredModel__methods_ },
              { Py_tp_init, (void *) t_PythonJ2SquaredModel_init_ },
              { Py_tp_getset, t_PythonJ2SquaredModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonJ2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonJ2SquaredModel, t_PythonJ2SquaredModel, PythonJ2SquaredModel);

            void t_PythonJ2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonJ2SquaredModel), &PY_TYPE_DEF(PythonJ2SquaredModel), module, "PythonJ2SquaredModel", 1);
            }

            void t_PythonJ2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "class_", make_descriptor(PythonJ2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "wrapfn_", make_descriptor(t_PythonJ2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonJ2SquaredModel::initializeClass);
              JNINativeMethod methods[] = {
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0 },
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1 },
                { "pythonDecRef", "()V", (void *) t_PythonJ2SquaredModel_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonJ2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_PythonJ2SquaredModel::wrap_Object(PythonJ2SquaredModel(((t_PythonJ2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonJ2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds)
            {
              PythonJ2SquaredModel object((jobject) NULL);

              INT_CALL(object = PythonJ2SquaredModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_DSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data)
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
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EphemerisPropagatorBuilder::class$ = NULL;
        jmethodID *EphemerisPropagatorBuilder::mids$ = NULL;
        bool EphemerisPropagatorBuilder::live$ = false;

        jclass EphemerisPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EphemerisPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_350dc18a1f44756a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_6682fdf9be8b3bcf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_a184da22b0a57732] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_9078d21669db6ed5] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_d397e255f9fb16e6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_4146a06325580643] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EphemerisPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_350dc18a1f44756a, a0.this$, a1.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_6682fdf9be8b3bcf, a0.this$, a1.this$, a2.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_a184da22b0a57732, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_9078d21669db6ed5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EphemerisPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EphemerisPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_d397e255f9fb16e6], a0.this$));
        }

        EphemerisPropagatorBuilder EphemerisPropagatorBuilder::copy() const
        {
          return EphemerisPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_4146a06325580643]));
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
        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EphemerisPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisPropagatorBuilder)[] = {
          { Py_tp_methods, t_EphemerisPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EphemerisPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EphemerisPropagatorBuilder, t_EphemerisPropagatorBuilder, EphemerisPropagatorBuilder);

        void t_EphemerisPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisPropagatorBuilder), &PY_TYPE_DEF(EphemerisPropagatorBuilder), module, "EphemerisPropagatorBuilder", 0);
        }

        void t_EphemerisPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "class_", make_descriptor(EphemerisPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "wrapfn_", make_descriptor(t_EphemerisPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EphemerisPropagatorBuilder::wrap_Object(EphemerisPropagatorBuilder(((t_EphemerisPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          EphemerisPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EphemerisPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *Dfp::class$ = NULL;
      jmethodID *Dfp::mids$ = NULL;
      bool Dfp::live$ = false;
      jint Dfp::ERR_SCALE = (jint) 0;
      jbyte Dfp::FINITE = (jbyte) 0;
      jbyte Dfp::INFINITE$ = (jbyte) 0;
      jint Dfp::MAX_EXP = (jint) 0;
      jint Dfp::MIN_EXP = (jint) 0;
      jbyte Dfp::QNAN = (jbyte) 0;
      jint Dfp::RADIX = (jint) 0;
      jbyte Dfp::SNAN$ = (jbyte) 0;

      jclass Dfp::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/Dfp");

          mids$ = new jmethodID[max_mid];
          mids$[mid_abs_20a565cdc6596121] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acos_20a565cdc6596121] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acosh_20a565cdc6596121] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_f0d5166eeb6b0680] = env->getMethodID(cls, "add", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_5caa6ddeafdf80db] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_20a565cdc6596121] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asinh_20a565cdc6596121] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_20a565cdc6596121] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan2_f0d5166eeb6b0680] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanh_20a565cdc6596121] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cbrt_20a565cdc6596121] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_ceil_20a565cdc6596121] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_classify_f2f64475e4580546] = env->getMethodID(cls, "classify", "()I");
          mids$[mid_copySign_f0d5166eeb6b0680] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copySign_5caa6ddeafdf80db] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copysign_5f4c8a207222b7cd] = env->getStaticMethodID(cls, "copysign", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_20a565cdc6596121] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosh_20a565cdc6596121] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_f0d5166eeb6b0680] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_5caa6ddeafdf80db] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_f72d07eb955b446b] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dotrap_dd3b370054806993] = env->getMethodID(cls, "dotrap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_20a565cdc6596121] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expm1_20a565cdc6596121] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_floor_20a565cdc6596121] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
          mids$[mid_getField_7adca8a434a69c24] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getOne_20a565cdc6596121] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_20a565cdc6596121] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_f2f64475e4580546] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getTwo_20a565cdc6596121] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_20a565cdc6596121] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_greaterThan_7887f0abbdd3e7f5] = env->getMethodID(cls, "greaterThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_f0d5166eeb6b0680] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_intLog10_f2f64475e4580546] = env->getMethodID(cls, "intLog10", "()I");
          mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_e470b6d9e0d979db] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_lessThan_7887f0abbdd3e7f5] = env->getMethodID(cls, "lessThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_linearCombination_c5c3dc8b1c53a334] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_f4e46154c6eba2a3] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_6b2daef0a7ee2e73] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_4e4dc81ad0f79cee] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_fb8499445481cc88] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_8963aa043da685eb] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_166070229d3a8b53] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_e0bf973bf7ff116c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_20a565cdc6596121] = env->getMethodID(cls, "log", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10_20a565cdc6596121] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10K_f2f64475e4580546] = env->getMethodID(cls, "log10K", "()I");
          mids$[mid_log1p_20a565cdc6596121] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_f0d5166eeb6b0680] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_5caa6ddeafdf80db] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_f72d07eb955b446b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negate_20a565cdc6596121] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negativeOrNull_e470b6d9e0d979db] = env->getMethodID(cls, "negativeOrNull", "()Z");
          mids$[mid_newInstance_20a565cdc6596121] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_3f89d25657eee84e] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f0d5166eeb6b0680] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_970ab21c4d121514] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_5caa6ddeafdf80db] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f72d07eb955b446b] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_aaf2a1c8efdefd0f] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_ecc4c322de4c3f09] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/DfpField;Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_7c8aa6cad7f772b2] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_f0d5166eeb6b0680] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_positiveOrNull_e470b6d9e0d979db] = env->getMethodID(cls, "positiveOrNull", "()Z");
          mids$[mid_pow_f0d5166eeb6b0680] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_5caa6ddeafdf80db] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_f72d07eb955b446b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10_f72d07eb955b446b] = env->getMethodID(cls, "power10", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10K_f72d07eb955b446b] = env->getMethodID(cls, "power10K", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_reciprocal_20a565cdc6596121] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_f0d5166eeb6b0680] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_5caa6ddeafdf80db] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rint_20a565cdc6596121] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rootN_f72d07eb955b446b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_scalb_f72d07eb955b446b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sign_20a565cdc6596121] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_20a565cdc6596121] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_20a565cdc6596121] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_20a565cdc6596121] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_strictlyNegative_e470b6d9e0d979db] = env->getMethodID(cls, "strictlyNegative", "()Z");
          mids$[mid_strictlyPositive_e470b6d9e0d979db] = env->getMethodID(cls, "strictlyPositive", "()Z");
          mids$[mid_subtract_f0d5166eeb6b0680] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_subtract_5caa6ddeafdf80db] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_20a565cdc6596121] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tanh_20a565cdc6596121] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDegrees_20a565cdc6596121] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "toDouble", "()D");
          mids$[mid_toRadians_20a565cdc6596121] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toSplitDouble_7cdc325af0834901] = env->getMethodID(cls, "toSplitDouble", "()[D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_20a565cdc6596121] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_unequal_7887f0abbdd3e7f5] = env->getMethodID(cls, "unequal", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_complement_38565d58479aa24a] = env->getMethodID(cls, "complement", "(I)I");
          mids$[mid_shiftRight_7ae3461a92a43152] = env->getMethodID(cls, "shiftRight", "()V");
          mids$[mid_align_38565d58479aa24a] = env->getMethodID(cls, "align", "(I)I");
          mids$[mid_trunc_4e2b92a542bdeaf1] = env->getMethodID(cls, "trunc", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dfp2sci_0090f7797e403f43] = env->getMethodID(cls, "dfp2sci", "()Ljava/lang/String;");
          mids$[mid_dfp2string_0090f7797e403f43] = env->getMethodID(cls, "dfp2string", "()Ljava/lang/String;");
          mids$[mid_trap_51b38bcd21024ab9] = env->getMethodID(cls, "trap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_shiftLeft_7ae3461a92a43152] = env->getMethodID(cls, "shiftLeft", "()V");
          mids$[mid_round_38565d58479aa24a] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ERR_SCALE = env->getStaticIntField(cls, "ERR_SCALE");
          FINITE = env->getStaticByteField(cls, "FINITE");
          INFINITE$ = env->getStaticByteField(cls, "INFINITE");
          MAX_EXP = env->getStaticIntField(cls, "MAX_EXP");
          MIN_EXP = env->getStaticIntField(cls, "MIN_EXP");
          QNAN = env->getStaticByteField(cls, "QNAN");
          RADIX = env->getStaticIntField(cls, "RADIX");
          SNAN$ = env->getStaticByteField(cls, "SNAN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Dfp Dfp::abs() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_abs_20a565cdc6596121]));
      }

      Dfp Dfp::acos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acos_20a565cdc6596121]));
      }

      Dfp Dfp::acosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acosh_20a565cdc6596121]));
      }

      Dfp Dfp::add(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::add(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::asin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asin_20a565cdc6596121]));
      }

      Dfp Dfp::asinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asinh_20a565cdc6596121]));
      }

      Dfp Dfp::atan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan_20a565cdc6596121]));
      }

      Dfp Dfp::atan2(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan2_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::atanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atanh_20a565cdc6596121]));
      }

      Dfp Dfp::cbrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cbrt_20a565cdc6596121]));
      }

      Dfp Dfp::ceil() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ceil_20a565cdc6596121]));
      }

      jint Dfp::classify() const
      {
        return env->callIntMethod(this$, mids$[mid_classify_f2f64475e4580546]);
      }

      Dfp Dfp::copySign(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::copySign(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::copysign(const Dfp & a0, const Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Dfp(env->callStaticObjectMethod(cls, mids$[mid_copysign_5f4c8a207222b7cd], a0.this$, a1.this$));
      }

      Dfp Dfp::cos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cos_20a565cdc6596121]));
      }

      Dfp Dfp::cosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cosh_20a565cdc6596121]));
      }

      Dfp Dfp::divide(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::divide(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::divide(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_f72d07eb955b446b], a0));
      }

      Dfp Dfp::dotrap(jint a0, const ::java::lang::String & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_dotrap_dd3b370054806993], a0, a1.this$, a2.this$, a3.this$));
      }

      jboolean Dfp::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      Dfp Dfp::exp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_exp_20a565cdc6596121]));
      }

      Dfp Dfp::expm1() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_expm1_20a565cdc6596121]));
      }

      Dfp Dfp::floor() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_floor_20a565cdc6596121]));
      }

      jint Dfp::getExponent() const
      {
        return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
      }

      ::org::hipparchus::dfp::DfpField Dfp::getField() const
      {
        return ::org::hipparchus::dfp::DfpField(env->callObjectMethod(this$, mids$[mid_getField_7adca8a434a69c24]));
      }

      Dfp Dfp::getOne() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getOne_20a565cdc6596121]));
      }

      Dfp Dfp::getPi() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getPi_20a565cdc6596121]));
      }

      jint Dfp::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_f2f64475e4580546]);
      }

      jdouble Dfp::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      Dfp Dfp::getTwo() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_20a565cdc6596121]));
      }

      Dfp Dfp::getZero() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getZero_20a565cdc6596121]));
      }

      jboolean Dfp::greaterThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_greaterThan_7887f0abbdd3e7f5], a0.this$);
      }

      jint Dfp::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      Dfp Dfp::hypot(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_hypot_f0d5166eeb6b0680], a0.this$));
      }

      jint Dfp::intLog10() const
      {
        return env->callIntMethod(this$, mids$[mid_intLog10_f2f64475e4580546]);
      }

      jint Dfp::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
      }

      jboolean Dfp::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean Dfp::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      jboolean Dfp::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_e470b6d9e0d979db]);
      }

      jboolean Dfp::lessThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_lessThan_7887f0abbdd3e7f5], a0.this$);
      }

      Dfp Dfp::linearCombination(const JArray< jdouble > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_c5c3dc8b1c53a334], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const JArray< Dfp > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_f4e46154c6eba2a3], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_6b2daef0a7ee2e73], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_4e4dc81ad0f79cee], a0, a1.this$, a2, a3.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_fb8499445481cc88], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_8963aa043da685eb], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5, const Dfp & a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_166070229d3a8b53], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5, jdouble a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_e0bf973bf7ff116c], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Dfp Dfp::log() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log_20a565cdc6596121]));
      }

      Dfp Dfp::log10() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log10_20a565cdc6596121]));
      }

      jint Dfp::log10K() const
      {
        return env->callIntMethod(this$, mids$[mid_log10K_f2f64475e4580546]);
      }

      Dfp Dfp::log1p() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log1p_20a565cdc6596121]));
      }

      Dfp Dfp::multiply(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::multiply(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::multiply(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_f72d07eb955b446b], a0));
      }

      Dfp Dfp::negate() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_negate_20a565cdc6596121]));
      }

      jboolean Dfp::negativeOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_negativeOrNull_e470b6d9e0d979db]);
      }

      Dfp Dfp::newInstance() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_20a565cdc6596121]));
      }

      Dfp Dfp::newInstance(const ::java::lang::String & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_3f89d25657eee84e], a0.this$));
      }

      Dfp Dfp::newInstance(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::newInstance(jbyte a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_970ab21c4d121514], a0));
      }

      Dfp Dfp::newInstance(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::newInstance(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f72d07eb955b446b], a0));
      }

      Dfp Dfp::newInstance(jlong a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_aaf2a1c8efdefd0f], a0));
      }

      Dfp Dfp::newInstance(const ::org::hipparchus::dfp::DfpField & a0, const ::org::hipparchus::dfp::DfpField$RoundingMode & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_ecc4c322de4c3f09], a0.this$, a1.this$));
      }

      Dfp Dfp::newInstance(jbyte a0, jbyte a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_7c8aa6cad7f772b2], a0, a1));
      }

      Dfp Dfp::nextAfter(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_f0d5166eeb6b0680], a0.this$));
      }

      jboolean Dfp::positiveOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_positiveOrNull_e470b6d9e0d979db]);
      }

      Dfp Dfp::pow(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::pow(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::pow(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_f72d07eb955b446b], a0));
      }

      Dfp Dfp::power10(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10_f72d07eb955b446b], a0));
      }

      Dfp Dfp::power10K(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10K_f72d07eb955b446b], a0));
      }

      Dfp Dfp::reciprocal() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_reciprocal_20a565cdc6596121]));
      }

      Dfp Dfp::remainder(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::remainder(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::rint() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rint_20a565cdc6596121]));
      }

      Dfp Dfp::rootN(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rootN_f72d07eb955b446b], a0));
      }

      Dfp Dfp::scalb(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_scalb_f72d07eb955b446b], a0));
      }

      Dfp Dfp::sign() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sign_20a565cdc6596121]));
      }

      Dfp Dfp::sin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sin_20a565cdc6596121]));
      }

      ::org::hipparchus::util::FieldSinCos Dfp::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
      }

      Dfp Dfp::sinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sinh_20a565cdc6596121]));
      }

      ::org::hipparchus::util::FieldSinhCosh Dfp::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
      }

      Dfp Dfp::sqrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sqrt_20a565cdc6596121]));
      }

      jboolean Dfp::strictlyNegative() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyNegative_e470b6d9e0d979db]);
      }

      jboolean Dfp::strictlyPositive() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyPositive_e470b6d9e0d979db]);
      }

      Dfp Dfp::subtract(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_f0d5166eeb6b0680], a0.this$));
      }

      Dfp Dfp::subtract(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_5caa6ddeafdf80db], a0));
      }

      Dfp Dfp::tan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tan_20a565cdc6596121]));
      }

      Dfp Dfp::tanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tanh_20a565cdc6596121]));
      }

      Dfp Dfp::toDegrees() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toDegrees_20a565cdc6596121]));
      }

      jdouble Dfp::toDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_toDouble_456d9a2f64d6b28d]);
      }

      Dfp Dfp::toRadians() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toRadians_20a565cdc6596121]));
      }

      JArray< jdouble > Dfp::toSplitDouble() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toSplitDouble_7cdc325af0834901]));
      }

      ::java::lang::String Dfp::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      Dfp Dfp::ulp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ulp_20a565cdc6596121]));
      }

      jboolean Dfp::unequal(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_unequal_7887f0abbdd3e7f5], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_abs(t_Dfp *self);
      static PyObject *t_Dfp_acos(t_Dfp *self);
      static PyObject *t_Dfp_acosh(t_Dfp *self);
      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_asin(t_Dfp *self);
      static PyObject *t_Dfp_asinh(t_Dfp *self);
      static PyObject *t_Dfp_atan(t_Dfp *self);
      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_atanh(t_Dfp *self);
      static PyObject *t_Dfp_cbrt(t_Dfp *self);
      static PyObject *t_Dfp_ceil(t_Dfp *self);
      static PyObject *t_Dfp_classify(t_Dfp *self);
      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args);
      static PyObject *t_Dfp_cos(t_Dfp *self);
      static PyObject *t_Dfp_cosh(t_Dfp *self);
      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_exp(t_Dfp *self);
      static PyObject *t_Dfp_expm1(t_Dfp *self);
      static PyObject *t_Dfp_floor(t_Dfp *self);
      static PyObject *t_Dfp_getExponent(t_Dfp *self);
      static PyObject *t_Dfp_getField(t_Dfp *self);
      static PyObject *t_Dfp_getOne(t_Dfp *self);
      static PyObject *t_Dfp_getPi(t_Dfp *self);
      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self);
      static PyObject *t_Dfp_getReal(t_Dfp *self);
      static PyObject *t_Dfp_getTwo(t_Dfp *self);
      static PyObject *t_Dfp_getZero(t_Dfp *self);
      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_intLog10(t_Dfp *self);
      static PyObject *t_Dfp_intValue(t_Dfp *self);
      static PyObject *t_Dfp_isInfinite(t_Dfp *self);
      static PyObject *t_Dfp_isNaN(t_Dfp *self);
      static PyObject *t_Dfp_isZero(t_Dfp *self);
      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_log(t_Dfp *self);
      static PyObject *t_Dfp_log10(t_Dfp *self);
      static PyObject *t_Dfp_log10K(t_Dfp *self);
      static PyObject *t_Dfp_log1p(t_Dfp *self);
      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_negate(t_Dfp *self);
      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self);
      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self);
      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_reciprocal(t_Dfp *self);
      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_rint(t_Dfp *self);
      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_sign(t_Dfp *self);
      static PyObject *t_Dfp_sin(t_Dfp *self);
      static PyObject *t_Dfp_sinCos(t_Dfp *self);
      static PyObject *t_Dfp_sinh(t_Dfp *self);
      static PyObject *t_Dfp_sinhCosh(t_Dfp *self);
      static PyObject *t_Dfp_sqrt(t_Dfp *self);
      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self);
      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self);
      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_tan(t_Dfp *self);
      static PyObject *t_Dfp_tanh(t_Dfp *self);
      static PyObject *t_Dfp_toDegrees(t_Dfp *self);
      static PyObject *t_Dfp_toDouble(t_Dfp *self);
      static PyObject *t_Dfp_toRadians(t_Dfp *self);
      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self);
      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_ulp(t_Dfp *self);
      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data);
      static PyGetSetDef t_Dfp__fields_[] = {
        DECLARE_GET_FIELD(t_Dfp, exponent),
        DECLARE_GET_FIELD(t_Dfp, field),
        DECLARE_GET_FIELD(t_Dfp, infinite),
        DECLARE_GET_FIELD(t_Dfp, naN),
        DECLARE_GET_FIELD(t_Dfp, one),
        DECLARE_GET_FIELD(t_Dfp, pi),
        DECLARE_GET_FIELD(t_Dfp, radixDigits),
        DECLARE_GET_FIELD(t_Dfp, real),
        DECLARE_GET_FIELD(t_Dfp, two),
        DECLARE_GET_FIELD(t_Dfp, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Dfp__methods_[] = {
        DECLARE_METHOD(t_Dfp, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, abs, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, add, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, asin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan2, METH_O),
        DECLARE_METHOD(t_Dfp, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, classify, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, copysign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Dfp, cos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, divide, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, dotrap, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, equals, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, exp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, floor, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getExponent, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getField, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, greaterThan, METH_O),
        DECLARE_METHOD(t_Dfp, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, hypot, METH_O),
        DECLARE_METHOD(t_Dfp, intLog10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, intValue, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, lessThan, METH_O),
        DECLARE_METHOD(t_Dfp, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, log, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10K, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, negate, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, negativeOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, nextAfter, METH_O),
        DECLARE_METHOD(t_Dfp, positiveOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, pow, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, power10, METH_O),
        DECLARE_METHOD(t_Dfp, power10K, METH_O),
        DECLARE_METHOD(t_Dfp, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, rint, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, rootN, METH_O),
        DECLARE_METHOD(t_Dfp, scalb, METH_O),
        DECLARE_METHOD(t_Dfp, sign, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyNegative, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyPositive, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, tan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toSplitDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toString, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, unequal, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Dfp)[] = {
        { Py_tp_methods, t_Dfp__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Dfp__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Dfp)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Dfp, t_Dfp, Dfp);

      void t_Dfp::install(PyObject *module)
      {
        installType(&PY_TYPE(Dfp), &PY_TYPE_DEF(Dfp), module, "Dfp", 0);
      }

      void t_Dfp::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "class_", make_descriptor(Dfp::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "wrapfn_", make_descriptor(t_Dfp::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "boxfn_", make_descriptor(boxObject));
        env->getClass(Dfp::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "ERR_SCALE", make_descriptor(Dfp::ERR_SCALE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "FINITE", make_descriptor(Dfp::FINITE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "INFINITE", make_descriptor(Dfp::INFINITE$));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MAX_EXP", make_descriptor(Dfp::MAX_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MIN_EXP", make_descriptor(Dfp::MIN_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "QNAN", make_descriptor(Dfp::QNAN));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "RADIX", make_descriptor(Dfp::RADIX));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "SNAN", make_descriptor(Dfp::SNAN$));
      }

      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Dfp::initializeClass, 1)))
          return NULL;
        return t_Dfp::wrap_Object(Dfp(((t_Dfp *) arg)->object.this$));
      }
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Dfp::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Dfp_abs(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Dfp_asin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_asinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Dfp_atanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cbrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_ceil(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_classify(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.classify());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args)
      {
        Dfp a0((jobject) NULL);
        Dfp a1((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::Dfp::copysign(a0, a1));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "copysign", args);
        return NULL;
      }

      static PyObject *t_Dfp_cos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args)
      {
        jint a0;
        ::java::lang::String a1((jobject) NULL);
        Dfp a2((jobject) NULL);
        Dfp a3((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "Iskk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.dotrap(a0, a1, a2, a3));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotrap", args);
        return NULL;
      }

      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Dfp_exp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_expm1(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_floor(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getExponent(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getExponent());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getField(t_Dfp *self)
      {
        ::org::hipparchus::dfp::DfpField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(result);
      }

      static PyObject *t_Dfp_getOne(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getPi(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getReal(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_getTwo(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getZero(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.greaterThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "greaterThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Dfp_intLog10(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intLog10());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_intValue(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_isInfinite(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isNaN(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isZero(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.lessThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "lessThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            JArray< Dfp > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp a6((jobject) NULL);
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            jdouble a6;
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Dfp_log(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10K(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.log10K());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_log1p(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Dfp_negate(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.negativeOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::dfp::DfpField a0((jobject) NULL);
            ::org::hipparchus::dfp::DfpField$RoundingMode a1((jobject) NULL);
            PyTypeObject **p1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::hipparchus::dfp::DfpField::initializeClass, ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            jbyte a1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", args);
        return NULL;
      }

      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextAfter", arg);
        return NULL;
      }

      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.positiveOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10", arg);
        return NULL;
      }

      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10K(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10K", arg);
        return NULL;
      }

      static PyObject *t_Dfp_reciprocal(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Dfp_rint(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Dfp_sign(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinCos(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinhCosh(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sqrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyNegative());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyPositive());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Dfp_tan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_tanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDegrees(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDouble(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.toDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_toRadians(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toSplitDouble());
        return result.wrap();
      }

      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Dfp_ulp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.unequal(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "unequal", arg);
        return NULL;
      }

      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getExponent());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *AuxiliaryElements::class$ = NULL;
            jmethodID *AuxiliaryElements::mids$ = NULL;
            bool AuxiliaryElements::live$ = false;

            jclass AuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e04fbc6bf56fc718] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;I)V");
                mids$[mid_getAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getB_456d9a2f64d6b28d] = env->getMethodID(cls, "getB", "()D");
                mids$[mid_getBeta_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getC_456d9a2f64d6b28d] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEcc_456d9a2f64d6b28d] = env->getMethodID(cls, "getEcc", "()D");
                mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_456d9a2f64d6b28d] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getH_456d9a2f64d6b28d] = env->getMethodID(cls, "getH", "()D");
                mids$[mid_getK_456d9a2f64d6b28d] = env->getMethodID(cls, "getK", "()D");
                mids$[mid_getKeplerianPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
                mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
                mids$[mid_getLf_456d9a2f64d6b28d] = env->getMethodID(cls, "getLf", "()D");
                mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getOrbit_551bf685780e3c1f] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
                mids$[mid_getP_456d9a2f64d6b28d] = env->getMethodID(cls, "getP", "()D");
                mids$[mid_getQ_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ", "()D");
                mids$[mid_getRetrogradeFactor_f2f64475e4580546] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_456d9a2f64d6b28d] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getVectorF_17a952530a808943] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorG_17a952530a808943] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorW_17a952530a808943] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AuxiliaryElements::AuxiliaryElements(const ::org::orekit::orbits::Orbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e04fbc6bf56fc718, a0.this$, a1)) {}

            jdouble AuxiliaryElements::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getB_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate AuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            jdouble AuxiliaryElements::getEcc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEcc_456d9a2f64d6b28d]);
            }

            ::org::orekit::frames::Frame AuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
            }

            jdouble AuxiliaryElements::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getH() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getH_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getKeplerianPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getLM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLM_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getLf() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLf_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getLv() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLv_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            ::org::orekit::orbits::Orbit AuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_551bf685780e3c1f]));
            }

            jdouble AuxiliaryElements::getP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getP_456d9a2f64d6b28d]);
            }

            jdouble AuxiliaryElements::getQ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getQ_456d9a2f64d6b28d]);
            }

            jint AuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_f2f64475e4580546]);
            }

            jdouble AuxiliaryElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_17a952530a808943]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_17a952530a808943]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_17a952530a808943]));
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
          namespace utilities {
            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data);
            static PyGetSetDef t_AuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_AuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_AuxiliaryElements, b),
              DECLARE_GET_FIELD(t_AuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_AuxiliaryElements, c),
              DECLARE_GET_FIELD(t_AuxiliaryElements, date),
              DECLARE_GET_FIELD(t_AuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_AuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_AuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, h),
              DECLARE_GET_FIELD(t_AuxiliaryElements, k),
              DECLARE_GET_FIELD(t_AuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lf),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_AuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_AuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_AuxiliaryElements, p),
              DECLARE_GET_FIELD(t_AuxiliaryElements, q),
              DECLARE_GET_FIELD(t_AuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_AuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorW),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_AuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLf, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorW, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AuxiliaryElements)[] = {
              { Py_tp_methods, t_AuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_AuxiliaryElements_init_ },
              { Py_tp_getset, t_AuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AuxiliaryElements, t_AuxiliaryElements, AuxiliaryElements);

            void t_AuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(AuxiliaryElements), &PY_TYPE_DEF(AuxiliaryElements), module, "AuxiliaryElements", 0);
            }

            void t_AuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "class_", make_descriptor(AuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "wrapfn_", make_descriptor(t_AuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_AuxiliaryElements::wrap_Object(AuxiliaryElements(((t_AuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jint a1;
              AuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEcc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getH());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLf());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLv());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self)
            {
              ::org::orekit::orbits::Orbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getQ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEcc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getH());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLM());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLf());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLv());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::Orbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getP());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getQ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayList::class$ = NULL;
    jmethodID *ArrayList::mids$ = NULL;
    bool ArrayList::live$ = false;

    jclass ArrayList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_92e02b8dd38af23a] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_17269709aac5e427] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_ensureCapacity_0a2a1ac2721c0336] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_2db0f6e4b8d9201f] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_ac8c1b6f384391ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_ac8c1b6f384391ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_4e1a823c948bf3a6] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_cada45a770b36785] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_2db0f6e4b8d9201f] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_d88dbdb69255b770] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_fbb048a414c33f9c] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_4aed3eb33e58d2f7] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_4a0f7788a82593c4] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_66041b51ef6ee21d] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_trimToSize_7ae3461a92a43152] = env->getMethodID(cls, "trimToSize", "()V");
        mids$[mid_removeRange_8dbc1129a3c2557a] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayList::ArrayList() : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ArrayList::ArrayList(jint a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    ArrayList::ArrayList(const ::java::util::Collection & a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

    jboolean ArrayList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    void ArrayList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_92e02b8dd38af23a], a0, a1.this$);
    }

    jboolean ArrayList::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    jboolean ArrayList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17269709aac5e427], a0, a1.this$);
    }

    void ArrayList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ::java::lang::Object ArrayList::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean ArrayList::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    void ArrayList::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_0a2a1ac2721c0336], a0);
    }

    jboolean ArrayList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object ArrayList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_2db0f6e4b8d9201f], a0));
    }

    jint ArrayList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint ArrayList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_ac8c1b6f384391ef], a0.this$);
    }

    jboolean ArrayList::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator ArrayList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jint ArrayList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_ac8c1b6f384391ef], a0.this$);
    }

    ::java::util::ListIterator ArrayList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_4e1a823c948bf3a6]));
    }

    ::java::util::ListIterator ArrayList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_cada45a770b36785], a0));
    }

    ::java::lang::Object ArrayList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_2db0f6e4b8d9201f], a0));
    }

    jboolean ArrayList::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jboolean ArrayList::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }

    jboolean ArrayList::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_d88dbdb69255b770], a0.this$);
    }

    ::java::lang::Object ArrayList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_fbb048a414c33f9c], a0, a1.this$));
    }

    jint ArrayList::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    void ArrayList::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_4aed3eb33e58d2f7], a0.this$);
    }

    ::java::util::Spliterator ArrayList::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    ::java::util::List ArrayList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_4a0f7788a82593c4], a0, a1));
    }

    JArray< ::java::lang::Object > ArrayList::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
    }

    JArray< ::java::lang::Object > ArrayList::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_66041b51ef6ee21d], a0.this$));
    }

    void ArrayList::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_7ae3461a92a43152]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args);
    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clone(t_ArrayList *self);
    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg);
    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self);
    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data);
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data);
    static PyGetSetDef t_ArrayList__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayList, empty),
      DECLARE_GET_FIELD(t_ArrayList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayList__methods_[] = {
      DECLARE_METHOD(t_ArrayList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayList, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, ensureCapacity, METH_O),
      DECLARE_METHOD(t_ArrayList, equals, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, get, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, set, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, sort, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, subList, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, toArray, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, trimToSize, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayList)[] = {
      { Py_tp_methods, t_ArrayList__methods_ },
      { Py_tp_init, (void *) t_ArrayList_init_ },
      { Py_tp_getset, t_ArrayList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayList *)) get_generic_iterator< t_ArrayList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractList),
      NULL
    };

    DEFINE_TYPE(ArrayList, t_ArrayList, ArrayList);
    PyObject *t_ArrayList::wrap_Object(const ArrayList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayList::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayList), &PY_TYPE_DEF(ArrayList), module, "ArrayList", 0);
    }

    void t_ArrayList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "class_", make_descriptor(ArrayList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "wrapfn_", make_descriptor(t_ArrayList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayList::initializeClass, 1)))
        return NULL;
      return t_ArrayList::wrap_Object(ArrayList(((t_ArrayList *) arg)->object.this$));
    }
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayList object((jobject) NULL);

          INT_CALL(object = ArrayList());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayList(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayList(a0));
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

    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayList_clone(t_ArrayList *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ensureCapacity", arg);
      return NULL;
    }

    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "listIterator", args, 2);
    }

    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "set", args, 2);
    }

    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "sort", args, 2);
    }

    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "subList", args, 2);
    }

    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "toArray", args, 2);
    }

    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self)
    {
      OBJ_CALL(self->object.trimToSize());
      Py_RETURN_NONE;
    }
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/Class.h"
#include "java/util/NoSuchElementException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap$Iterator::mids$ = NULL;
      bool OpenIntToDoubleHashMap$Iterator::live$ = false;

      jclass OpenIntToDoubleHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_7ae3461a92a43152] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_e470b6d9e0d979db] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_f2f64475e4580546] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_456d9a2f64d6b28d] = env->getMethodID(cls, "value", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToDoubleHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_7ae3461a92a43152]);
      }

      jboolean OpenIntToDoubleHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_e470b6d9e0d979db]);
      }

      jint OpenIntToDoubleHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_f2f64475e4580546]);
      }

      jdouble OpenIntToDoubleHashMap$Iterator::value() const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_456d9a2f64d6b28d]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self);

      static PyMethodDef t_OpenIntToDoubleHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap$Iterator, t_OpenIntToDoubleHashMap$Iterator, OpenIntToDoubleHashMap$Iterator);

      void t_OpenIntToDoubleHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap$Iterator), &PY_TYPE_DEF(OpenIntToDoubleHashMap$Iterator), module, "OpenIntToDoubleHashMap$Iterator", 0);
      }

      void t_OpenIntToDoubleHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "class_", make_descriptor(OpenIntToDoubleHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap$Iterator::wrap_Object(OpenIntToDoubleHashMap$Iterator(((t_OpenIntToDoubleHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.value());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/TreeSet.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/io/Serializable.h"
#include "java/util/NavigableSet.h"
#include "java/util/Collection.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TreeSet::class$ = NULL;
    jmethodID *TreeSet::mids$ = NULL;
    bool TreeSet::live$ = false;

    jclass TreeSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TreeSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_4aed3eb33e58d2f7] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
        mids$[mid_init$_a0cbc2e5c81cd156] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_ceiling_ed50a8b49b8274dc] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_comparator_838794f9a43cf98e] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_035c6167e6569aac] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_edb7b61b9a16f086] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_first_dfd7647d9110ac9f] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_floor_ed50a8b49b8274dc] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_5cc25b3ab2f54634] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_92233265f2573726] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_ed50a8b49b8274dc] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_last_dfd7647d9110ac9f] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_lower_ed50a8b49b8274dc] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_dfd7647d9110ac9f] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_7f0b8ff9f951c500] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_cf0ad46ee1807f0a] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_5cc25b3ab2f54634] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_92233265f2573726] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TreeSet::TreeSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    TreeSet::TreeSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::Comparator & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_4aed3eb33e58d2f7, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::SortedSet & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_a0cbc2e5c81cd156, a0.this$)) {}

    jboolean TreeSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    jboolean TreeSet::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    ::java::lang::Object TreeSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_ed50a8b49b8274dc], a0.this$));
    }

    void TreeSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ::java::lang::Object TreeSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    ::java::util::Comparator TreeSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_838794f9a43cf98e]));
    }

    jboolean TreeSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    ::java::util::Iterator TreeSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_035c6167e6569aac]));
    }

    ::java::util::NavigableSet TreeSet::descendingSet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_edb7b61b9a16f086]));
    }

    ::java::lang::Object TreeSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_dfd7647d9110ac9f]));
    }

    ::java::lang::Object TreeSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::SortedSet TreeSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_5cc25b3ab2f54634], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_92233265f2573726], a0.this$, a1));
    }

    ::java::lang::Object TreeSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_ed50a8b49b8274dc], a0.this$));
    }

    jboolean TreeSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator TreeSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    ::java::lang::Object TreeSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_dfd7647d9110ac9f]));
    }

    ::java::lang::Object TreeSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object TreeSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object TreeSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_dfd7647d9110ac9f]));
    }

    jboolean TreeSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jint TreeSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Spliterator TreeSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    ::java::util::SortedSet TreeSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_7f0b8ff9f951c500], a0.this$, a1.this$));
    }

    ::java::util::NavigableSet TreeSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_cf0ad46ee1807f0a], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet TreeSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_5cc25b3ab2f54634], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_92233265f2573726], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args);
    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_clone(t_TreeSet *self);
    static PyObject *t_TreeSet_comparator(t_TreeSet *self);
    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self);
    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self);
    static PyObject *t_TreeSet_first(t_TreeSet *self);
    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_last(t_TreeSet *self);
    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self);
    static PyObject *t_TreeSet_pollLast(t_TreeSet *self);
    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data);
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data);
    static PyGetSetDef t_TreeSet__fields_[] = {
      DECLARE_GET_FIELD(t_TreeSet, empty),
      DECLARE_GET_FIELD(t_TreeSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TreeSet__methods_[] = {
      DECLARE_METHOD(t_TreeSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, add, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, addAll, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, ceiling, METH_O),
      DECLARE_METHOD(t_TreeSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, first, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, floor, METH_O),
      DECLARE_METHOD(t_TreeSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, higher, METH_O),
      DECLARE_METHOD(t_TreeSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, last, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, lower, METH_O),
      DECLARE_METHOD(t_TreeSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, size, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TreeSet)[] = {
      { Py_tp_methods, t_TreeSet__methods_ },
      { Py_tp_init, (void *) t_TreeSet_init_ },
      { Py_tp_getset, t_TreeSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_TreeSet *)) get_generic_iterator< t_TreeSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TreeSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(TreeSet, t_TreeSet, TreeSet);
    PyObject *t_TreeSet::wrap_Object(const TreeSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_TreeSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_TreeSet::install(PyObject *module)
    {
      installType(&PY_TYPE(TreeSet), &PY_TYPE_DEF(TreeSet), module, "TreeSet", 0);
    }

    void t_TreeSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "class_", make_descriptor(TreeSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "wrapfn_", make_descriptor(t_TreeSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TreeSet::initializeClass, 1)))
        return NULL;
      return t_TreeSet::wrap_Object(TreeSet(((t_TreeSet *) arg)->object.this$));
    }
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TreeSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          TreeSet object((jobject) NULL);

          INT_CALL(object = TreeSet());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
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

    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_TreeSet_clone(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_comparator(t_TreeSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_first(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_TreeSet_last(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_pollLast(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", args);
      return NULL;
    }
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *ConstantRefractionLayer::class$ = NULL;
        jmethodID *ConstantRefractionLayer::mids$ = NULL;
        bool ConstantRefractionLayer::live$ = false;

        jclass ConstantRefractionLayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/ConstantRefractionLayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLowestAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLowestAltitude", "()D");
            mids$[mid_getRefractiveIndex_456d9a2f64d6b28d] = env->getMethodID(cls, "getRefractiveIndex", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRefractionLayer::ConstantRefractionLayer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble ConstantRefractionLayer::getLowestAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowestAltitude_456d9a2f64d6b28d]);
        }

        jdouble ConstantRefractionLayer::getRefractiveIndex() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefractiveIndex_456d9a2f64d6b28d]);
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
    namespace rugged {
      namespace refraction {
        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data);
        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data);
        static PyGetSetDef t_ConstantRefractionLayer__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, lowestAltitude),
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, refractiveIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRefractionLayer__methods_[] = {
          DECLARE_METHOD(t_ConstantRefractionLayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getLowestAltitude, METH_NOARGS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getRefractiveIndex, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRefractionLayer)[] = {
          { Py_tp_methods, t_ConstantRefractionLayer__methods_ },
          { Py_tp_init, (void *) t_ConstantRefractionLayer_init_ },
          { Py_tp_getset, t_ConstantRefractionLayer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRefractionLayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantRefractionLayer, t_ConstantRefractionLayer, ConstantRefractionLayer);

        void t_ConstantRefractionLayer::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRefractionLayer), &PY_TYPE_DEF(ConstantRefractionLayer), module, "ConstantRefractionLayer", 0);
        }

        void t_ConstantRefractionLayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "class_", make_descriptor(ConstantRefractionLayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "wrapfn_", make_descriptor(t_ConstantRefractionLayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRefractionLayer::initializeClass, 1)))
            return NULL;
          return t_ConstantRefractionLayer::wrap_Object(ConstantRefractionLayer(((t_ConstantRefractionLayer *) arg)->object.this$));
        }
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRefractionLayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ConstantRefractionLayer object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = ConstantRefractionLayer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleValueChecker.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleValueChecker::class$ = NULL;
      jmethodID *SimpleValueChecker::mids$ = NULL;
      bool SimpleValueChecker::live$ = false;

      jclass SimpleValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_91f3ea6e43d2cb34] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointValuePair;Lorg/hipparchus/optim/PointValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

      jboolean SimpleValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointValuePair & a1, const ::org::hipparchus::optim::PointValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_91f3ea6e43d2cb34], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args);
      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args);
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data);
      static PyGetSetDef t_SimpleValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleValueChecker)[] = {
        { Py_tp_methods, t_SimpleValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleValueChecker_init_ },
        { Py_tp_getset, t_SimpleValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleValueChecker, t_SimpleValueChecker, SimpleValueChecker);
      PyObject *t_SimpleValueChecker::wrap_Object(const SimpleValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleValueChecker), &PY_TYPE_DEF(SimpleValueChecker), module, "SimpleValueChecker", 0);
      }

      void t_SimpleValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "class_", make_descriptor(SimpleValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "wrapfn_", make_descriptor(t_SimpleValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleValueChecker::wrap_Object(SimpleValueChecker(((t_SimpleValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointValuePair::initializeClass, ::org::hipparchus::optim::PointValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/AbstractDragForceModel.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *AbstractDragForceModel::class$ = NULL;
        jmethodID *AbstractDragForceModel::mids$ = NULL;
        bool AbstractDragForceModel::live$ = false;

        jclass AbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/AbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_isDSStateDerivative_91c945ca7903e8ac] = env->getMethodID(cls, "isDSStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isGradientStateDerivative_91c945ca7903e8ac] = env->getMethodID(cls, "isGradientStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isVariable_16c3650793669947] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Z");
            mids$[mid_isVariable_520d8041d1c91e9b] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;I)Z");
            mids$[mid_getDSDensityWrtStateUsingFiniteDifferences_3de0c2016b93c048] = env->getMethodID(cls, "getDSDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getGradientDensityWrtStateUsingFiniteDifferences_5d5ea9a42db716fd] = env->getMethodID(cls, "getGradientDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean AbstractDragForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
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
      namespace drag {
        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self);

        static PyMethodDef t_AbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, dependsOnPositionOnly, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDragForceModel)[] = {
          { Py_tp_methods, t_AbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDragForceModel, t_AbstractDragForceModel, AbstractDragForceModel);

        void t_AbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDragForceModel), &PY_TYPE_DEF(AbstractDragForceModel), module, "AbstractDragForceModel", 0);
        }

        void t_AbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "class_", make_descriptor(AbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "wrapfn_", make_descriptor(t_AbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractDragForceModel::wrap_Object(AbstractDragForceModel(((t_AbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$DoubleArrayConsumer::live$ = false;

            jclass ParseToken$DoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_ebc26dcaf4761286] = env->getMethodID(cls, "accept", "([D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleArrayConsumer::accept(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_ebc26dcaf4761286], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleArrayConsumer, t_ParseToken$DoubleArrayConsumer, ParseToken$DoubleArrayConsumer);

            void t_ParseToken$DoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$DoubleArrayConsumer), module, "ParseToken$DoubleArrayConsumer", 0);
            }

            void t_ParseToken$DoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "class_", make_descriptor(ParseToken$DoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleArrayConsumer::wrap_Object(ParseToken$DoubleArrayConsumer(((t_ParseToken$DoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *UserDefinedXmlTokenBuilder::class$ = NULL;
            jmethodID *UserDefinedXmlTokenBuilder::mids$ = NULL;
            bool UserDefinedXmlTokenBuilder::live$ = false;

            jclass UserDefinedXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_9b67b2bd574b1d70] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedXmlTokenBuilder::UserDefinedXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::java::util::List UserDefinedXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_9b67b2bd574b1d70], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
        namespace utils {
          namespace lexical {
            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_UserDefinedXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedXmlTokenBuilder)[] = {
              { Py_tp_methods, t_UserDefinedXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_UserDefinedXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserDefinedXmlTokenBuilder, t_UserDefinedXmlTokenBuilder, UserDefinedXmlTokenBuilder);

            void t_UserDefinedXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedXmlTokenBuilder), &PY_TYPE_DEF(UserDefinedXmlTokenBuilder), module, "UserDefinedXmlTokenBuilder", 0);
            }

            void t_UserDefinedXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "class_", make_descriptor(UserDefinedXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "wrapfn_", make_descriptor(t_UserDefinedXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_UserDefinedXmlTokenBuilder::wrap_Object(UserDefinedXmlTokenBuilder(((t_UserDefinedXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              UserDefinedXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = UserDefinedXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/LongFrequency.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LongFrequency::class$ = NULL;
      jmethodID *LongFrequency::mids$ = NULL;
      bool LongFrequency::live$ = false;

      jclass LongFrequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LongFrequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_4aed3eb33e58d2f7] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_0a2a1ac2721c0336] = env->getMethodID(cls, "addValue", "(I)V");
          mids$[mid_getCount_3f523e51b2989e1f] = env->getMethodID(cls, "getCount", "(I)J");
          mids$[mid_getCumFreq_3f523e51b2989e1f] = env->getMethodID(cls, "getCumFreq", "(I)J");
          mids$[mid_getCumPct_b772323fc98b7293] = env->getMethodID(cls, "getCumPct", "(I)D");
          mids$[mid_getPct_b772323fc98b7293] = env->getMethodID(cls, "getPct", "(I)D");
          mids$[mid_incrementValue_a1c96e7d1aa915f2] = env->getMethodID(cls, "incrementValue", "(IJ)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LongFrequency::LongFrequency() : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      LongFrequency::LongFrequency(const ::java::util::Comparator & a0) : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_4aed3eb33e58d2f7, a0.this$)) {}

      void LongFrequency::addValue(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_0a2a1ac2721c0336], a0);
      }

      jlong LongFrequency::getCount(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_3f523e51b2989e1f], a0);
      }

      jlong LongFrequency::getCumFreq(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_3f523e51b2989e1f], a0);
      }

      jdouble LongFrequency::getCumPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_b772323fc98b7293], a0);
      }

      jdouble LongFrequency::getPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_b772323fc98b7293], a0);
      }

      void LongFrequency::incrementValue(jint a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_a1c96e7d1aa915f2], a0, a1);
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
      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args);
      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data);
      static PyGetSetDef t_LongFrequency__fields_[] = {
        DECLARE_GET_FIELD(t_LongFrequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LongFrequency__methods_[] = {
        DECLARE_METHOD(t_LongFrequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, addValue, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCount, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumFreq, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, incrementValue, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongFrequency)[] = {
        { Py_tp_methods, t_LongFrequency__methods_ },
        { Py_tp_init, (void *) t_LongFrequency_init_ },
        { Py_tp_getset, t_LongFrequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongFrequency)[] = {
        &PY_TYPE_DEF(::org::hipparchus::stat::Frequency),
        NULL
      };

      DEFINE_TYPE(LongFrequency, t_LongFrequency, LongFrequency);
      PyObject *t_LongFrequency::wrap_Object(const LongFrequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LongFrequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LongFrequency::install(PyObject *module)
      {
        installType(&PY_TYPE(LongFrequency), &PY_TYPE_DEF(LongFrequency), module, "LongFrequency", 0);
      }

      void t_LongFrequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "class_", make_descriptor(LongFrequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "wrapfn_", make_descriptor(t_LongFrequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongFrequency::initializeClass, 1)))
          return NULL;
        return t_LongFrequency::wrap_Object(LongFrequency(((t_LongFrequency *) arg)->object.this$));
      }
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongFrequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            LongFrequency object((jobject) NULL);

            INT_CALL(object = LongFrequency());
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Long);
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            LongFrequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = LongFrequency(a0));
              self->object = object;
              self->parameters[0] = ::java::lang::PY_TYPE(Long);
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "addValue", args, 2);
      }

      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCount", args, 2);
      }

      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumFreq", args, 2);
      }

      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumPct", args, 2);
      }

      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getPct", args, 2);
      }

      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong a1;

        if (!parseArgs(args, "IJ", &a0, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "incrementValue", args, 2);
      }
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemWriter::class$ = NULL;
              jmethodID *AemWriter::mids$ = NULL;
              bool AemWriter::live$ = false;
              jdouble AemWriter::CCSDS_AEM_VERS = (jdouble) 0;
              jint AemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7cae0d769c2d9ccc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_96ddf10fe566f06d] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/adm/aem/AemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_AEM_VERS = env->getStaticDoubleField(cls, "CCSDS_AEM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemWriter::AemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_7cae0d769c2d9ccc, a0.this$, a1.this$, a2.this$)) {}
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
          namespace adm {
            namespace aem {
              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args);
              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data);
              static PyGetSetDef t_AemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemWriter__methods_[] = {
                DECLARE_METHOD(t_AemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemWriter)[] = {
                { Py_tp_methods, t_AemWriter__methods_ },
                { Py_tp_init, (void *) t_AemWriter_init_ },
                { Py_tp_getset, t_AemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AemWriter, t_AemWriter, AemWriter);
              PyObject *t_AemWriter::wrap_Object(const AemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AemWriter), &PY_TYPE_DEF(AemWriter), module, "AemWriter", 0);
              }

              void t_AemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "class_", make_descriptor(AemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "wrapfn_", make_descriptor(t_AemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "CCSDS_AEM_VERS", make_descriptor(AemWriter::CCSDS_AEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "KVN_PADDING_WIDTH", make_descriptor(AemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemWriter::initializeClass, 1)))
                  return NULL;
                return t_AemWriter::wrap_Object(AemWriter(((t_AemWriter *) arg)->object.this$));
              }
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                AemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = AemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(Aem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data)
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
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOFType::class$ = NULL;
        jmethodID *EncounterLOFType::mids$ = NULL;
        bool EncounterLOFType::live$ = false;
        EncounterLOFType *EncounterLOFType::DEFAULT = NULL;
        EncounterLOFType *EncounterLOFType::VALSECCHI = NULL;

        jclass EncounterLOFType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOFType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFrame_4bd1f380731337b6] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_getFrame_95ab5e376c585066] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_valueOf_913190bdd080c35f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/encounter/EncounterLOFType;");
            mids$[mid_values_62121818dabad6fc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/encounter/EncounterLOFType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT = new EncounterLOFType(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            VALSECCHI = new EncounterLOFType(env->getStaticObjectField(cls, "VALSECCHI", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_4bd1f380731337b6], a0.this$));
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_95ab5e376c585066], a0.this$));
        }

        EncounterLOFType EncounterLOFType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EncounterLOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_913190bdd080c35f], a0.this$));
        }

        JArray< EncounterLOFType > EncounterLOFType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EncounterLOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_62121818dabad6fc]));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EncounterLOFType_values(PyTypeObject *type);
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data);
        static PyGetSetDef t_EncounterLOFType__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOFType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOFType__methods_[] = {
          DECLARE_METHOD(t_EncounterLOFType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, of_, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOFType)[] = {
          { Py_tp_methods, t_EncounterLOFType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOFType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOFType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EncounterLOFType, t_EncounterLOFType, EncounterLOFType);
        PyObject *t_EncounterLOFType::wrap_Object(const EncounterLOFType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EncounterLOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EncounterLOFType::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOFType), &PY_TYPE_DEF(EncounterLOFType), module, "EncounterLOFType", 0);
        }

        void t_EncounterLOFType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "class_", make_descriptor(EncounterLOFType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "wrapfn_", make_descriptor(t_EncounterLOFType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "boxfn_", make_descriptor(boxObject));
          env->getClass(EncounterLOFType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "DEFAULT", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::DEFAULT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "VALSECCHI", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::VALSECCHI)));
        }

        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOFType::initializeClass, 1)))
            return NULL;
          return t_EncounterLOFType::wrap_Object(EncounterLOFType(((t_EncounterLOFType *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOFType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFrame", args);
          return NULL;
        }

        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EncounterLOFType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::valueOf(a0));
            return t_EncounterLOFType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EncounterLOFType_values(PyTypeObject *type)
        {
          JArray< EncounterLOFType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::values());
          return JArray<jobject>(result.this$).wrap(t_EncounterLOFType::wrap_jobject);
        }
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor$Order::class$ = NULL;
        jmethodID *BSPTreeVisitor$Order::mids$ = NULL;
        bool BSPTreeVisitor$Order::live$ = false;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_PLUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_SUB_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_MINUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_SUB_MINUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_MINUS_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_PLUS_MINUS = NULL;

        jclass BSPTreeVisitor$Order::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_d76f867903c94a08] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");
            mids$[mid_values_6ee79ae9922e7e20] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MINUS_PLUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_PLUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            MINUS_SUB_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_SUB_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_MINUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_MINUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_SUB_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_SUB_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_MINUS_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_MINUS_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_PLUS_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_PLUS_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTreeVisitor$Order BSPTreeVisitor$Order::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BSPTreeVisitor$Order(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d76f867903c94a08], a0.this$));
        }

        JArray< BSPTreeVisitor$Order > BSPTreeVisitor$Order::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BSPTreeVisitor$Order >(env->callStaticObjectMethod(cls, mids$[mid_values_6ee79ae9922e7e20]));
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
      namespace partitioning {
        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type);
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor$Order__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor$Order, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor$Order__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor$Order, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor$Order)[] = {
          { Py_tp_methods, t_BSPTreeVisitor$Order__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor$Order__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor$Order)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor$Order, t_BSPTreeVisitor$Order, BSPTreeVisitor$Order);
        PyObject *t_BSPTreeVisitor$Order::wrap_Object(const BSPTreeVisitor$Order& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor$Order::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor$Order::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor$Order), &PY_TYPE_DEF(BSPTreeVisitor$Order), module, "BSPTreeVisitor$Order", 0);
        }

        void t_BSPTreeVisitor$Order::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "class_", make_descriptor(BSPTreeVisitor$Order::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "wrapfn_", make_descriptor(t_BSPTreeVisitor$Order::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "boxfn_", make_descriptor(boxObject));
          env->getClass(BSPTreeVisitor$Order::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_PLUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_PLUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_SUB_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_SUB_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_MINUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_MINUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_SUB_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_SUB_MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_MINUS_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_MINUS_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_PLUS_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_PLUS_MINUS)));
        }

        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor$Order::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor$Order::wrap_Object(BSPTreeVisitor$Order(((t_BSPTreeVisitor$Order *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor$Order::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::valueOf(a0));
            return t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type)
        {
          JArray< BSPTreeVisitor$Order > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::values());
          return JArray<jobject>(result.this$).wrap(t_BSPTreeVisitor$Order::wrap_jobject);
        }
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase$Status::class$ = NULL;
        jmethodID *EstimatedMeasurementBase$Status::mids$ = NULL;
        bool EstimatedMeasurementBase$Status::live$ = false;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::PROCESSED = NULL;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::REJECTED = NULL;

        jclass EstimatedMeasurementBase$Status::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase$Status");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_5665b50728ced594] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_values_4d932bd6622f60c9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PROCESSED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "PROCESSED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            REJECTED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "REJECTED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase$Status EstimatedMeasurementBase$Status::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EstimatedMeasurementBase$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5665b50728ced594], a0.this$));
        }

        JArray< EstimatedMeasurementBase$Status > EstimatedMeasurementBase$Status::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EstimatedMeasurementBase$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_4d932bd6622f60c9]));
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
        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type);
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase$Status__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase$Status, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase$Status__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase$Status)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase$Status__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimatedMeasurementBase$Status__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase$Status)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase$Status, t_EstimatedMeasurementBase$Status, EstimatedMeasurementBase$Status);
        PyObject *t_EstimatedMeasurementBase$Status::wrap_Object(const EstimatedMeasurementBase$Status& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase$Status::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase$Status), &PY_TYPE_DEF(EstimatedMeasurementBase$Status), module, "EstimatedMeasurementBase$Status", 0);
        }

        void t_EstimatedMeasurementBase$Status::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "class_", make_descriptor(EstimatedMeasurementBase$Status::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedMeasurementBase$Status::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "PROCESSED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::PROCESSED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "REJECTED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::REJECTED)));
        }

        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase$Status::wrap_Object(EstimatedMeasurementBase$Status(((t_EstimatedMeasurementBase$Status *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EstimatedMeasurementBase$Status result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::valueOf(a0));
            return t_EstimatedMeasurementBase$Status::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type)
        {
          JArray< EstimatedMeasurementBase$Status > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::values());
          return JArray<jobject>(result.this$).wrap(t_EstimatedMeasurementBase$Status::wrap_jobject);
        }
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonDataField.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonDataField::class$ = NULL;
          jmethodID *PythonDataField::mids$ = NULL;
          bool PythonDataField::live$ = false;

          jclass PythonDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_booleanValue_5de456094fe2b4d8] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDataField::PythonDataField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonDataField::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonDataField::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonDataField::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        namespace parser {
          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self);
          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args);
          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data);
          static PyGetSetDef t_PythonDataField__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDataField, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDataField__methods_[] = {
            DECLARE_METHOD(t_PythonDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDataField, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDataField, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDataField)[] = {
            { Py_tp_methods, t_PythonDataField__methods_ },
            { Py_tp_init, (void *) t_PythonDataField_init_ },
            { Py_tp_getset, t_PythonDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDataField, t_PythonDataField, PythonDataField);

          void t_PythonDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDataField), &PY_TYPE_DEF(PythonDataField), module, "PythonDataField", 1);
          }

          void t_PythonDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "class_", make_descriptor(PythonDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "wrapfn_", make_descriptor(t_PythonDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataField), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDataField::initializeClass);
            JNINativeMethod methods[] = {
              { "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z", (void *) t_PythonDataField_booleanValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonDataField_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDataField::initializeClass, 1)))
              return NULL;
            return t_PythonDataField::wrap_Object(PythonDataField(((t_PythonDataField *) arg)->object.this$));
          }
          static PyObject *t_PythonDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDataField_init_(t_PythonDataField *self, PyObject *args, PyObject *kwds)
          {
            PythonDataField object((jobject) NULL);

            INT_CALL(object = PythonDataField());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDataField_finalize(t_PythonDataField *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDataField_pythonExtension(t_PythonDataField *self, PyObject *args)
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

          static jboolean JNICALL t_PythonDataField_booleanValue0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "booleanValue", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("booleanValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonDataField_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDataField::mids$[PythonDataField::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDataField_get__self(t_PythonDataField *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$QuadraticSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$QuadraticSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$QuadraticSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_c564d6ace53a5934] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_c564d6ace53a5934], a0, a1, a2);
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction, t_SmoothStepFactory$QuadraticSmoothStepFunction, SmoothStepFactory$QuadraticSmoothStepFunction);

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction), module, "SmoothStepFactory$QuadraticSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_Object(SmoothStepFactory$QuadraticSmoothStepFunction(((t_SmoothStepFactory$QuadraticSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/PythonMappingFunction.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonMappingFunction::class$ = NULL;
          jmethodID *PythonMappingFunction::mids$ = NULL;
          bool PythonMappingFunction::live$ = false;

          jclass PythonMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMappingFunction::PythonMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self);
          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data);
          static PyGetSetDef t_PythonMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMappingFunction)[] = {
            { Py_tp_methods, t_PythonMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonMappingFunction_init_ },
            { Py_tp_getset, t_PythonMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMappingFunction, t_PythonMappingFunction, PythonMappingFunction);

          void t_PythonMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMappingFunction), &PY_TYPE_DEF(PythonMappingFunction), module, "PythonMappingFunction", 1);
          }

          void t_PythonMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "class_", make_descriptor(PythonMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "wrapfn_", make_descriptor(t_PythonMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonMappingFunction_mappingFactors0 },
              { "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonMappingFunction_mappingFactors1 },
              { "pythonDecRef", "()V", (void *) t_PythonMappingFunction_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonMappingFunction::wrap_Object(PythonMappingFunction(((t_PythonMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args)
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "dOO", (double) a0, o1, o2);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("mappingFactors", result);
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactors", result);
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

          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction::class$ = NULL;
      jmethodID *Fraction::mids$ = NULL;
      bool Fraction::live$ = false;
      Fraction *Fraction::FOUR_FIFTHS = NULL;
      Fraction *Fraction::MINUS_ONE = NULL;
      Fraction *Fraction::ONE = NULL;
      Fraction *Fraction::ONE_FIFTH = NULL;
      Fraction *Fraction::ONE_HALF = NULL;
      Fraction *Fraction::ONE_QUARTER = NULL;
      Fraction *Fraction::ONE_THIRD = NULL;
      Fraction *Fraction::THREE_FIFTHS = NULL;
      Fraction *Fraction::THREE_QUARTERS = NULL;
      Fraction *Fraction::TWO = NULL;
      Fraction *Fraction::TWO_FIFTHS = NULL;
      Fraction *Fraction::TWO_QUARTERS = NULL;
      Fraction *Fraction::TWO_THIRDS = NULL;
      Fraction *Fraction::ZERO = NULL;

      jclass Fraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_7847eacc50504e7f] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_a19d03cf471d5b7e] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_a6342e1f87806d3a] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_compareTo_0d392685ecffa868] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/Fraction;)I");
          mids$[mid_convergent_d628634ffc195a70] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/Fraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_d9c8edb42f215879] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_a19d03cf471d5b7e] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_divide_a6342e1f87806d3a] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominator_f2f64475e4580546] = env->getMethodID(cls, "getDenominator", "()I");
          mids$[mid_getField_b8cb7e3975ac8fd2] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getNumerator_f2f64475e4580546] = env->getMethodID(cls, "getNumerator", "()I");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_d273f56ab7916c75] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_e470b6d9e0d979db] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_a19d03cf471d5b7e] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_multiply_a6342e1f87806d3a] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_negate_7847eacc50504e7f] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_percentageValue_456d9a2f64d6b28d] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_reciprocal_7847eacc50504e7f] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_signum_f2f64475e4580546] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_a19d03cf471d5b7e] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_subtract_a6342e1f87806d3a] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new Fraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          MINUS_ONE = new Fraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE = new Fraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_FIFTH = new Fraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_HALF = new Fraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_QUARTER = new Fraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_THIRD = new Fraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_FIFTHS = new Fraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_QUARTERS = new Fraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO = new Fraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_FIFTHS = new Fraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_QUARTERS = new Fraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_THIRDS = new Fraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/Fraction;"));
          ZERO = new Fraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/Fraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Fraction::Fraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      Fraction::Fraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Fraction::Fraction(jdouble a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

      Fraction::Fraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      Fraction::Fraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

      Fraction Fraction::abs() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_abs_7847eacc50504e7f]));
      }

      Fraction Fraction::add(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_a19d03cf471d5b7e], a0.this$));
      }

      Fraction Fraction::add(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_a6342e1f87806d3a], a0));
      }

      jint Fraction::compareTo(const Fraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_0d392685ecffa868], a0.this$);
      }

      ::org::hipparchus::util::Pair Fraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::Fraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_d628634ffc195a70], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream Fraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_d9c8edb42f215879], a0, a1));
      }

      Fraction Fraction::divide(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_a19d03cf471d5b7e], a0.this$));
      }

      Fraction Fraction::divide(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_a6342e1f87806d3a], a0));
      }

      jdouble Fraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
      }

      jboolean Fraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jfloat Fraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
      }

      jint Fraction::getDenominator() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominator_f2f64475e4580546]);
      }

      ::org::hipparchus::fraction::FractionField Fraction::getField() const
      {
        return ::org::hipparchus::fraction::FractionField(env->callObjectMethod(this$, mids$[mid_getField_b8cb7e3975ac8fd2]));
      }

      jint Fraction::getNumerator() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumerator_f2f64475e4580546]);
      }

      jdouble Fraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      Fraction Fraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Fraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_d273f56ab7916c75], a0, a1));
      }

      jint Fraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jint Fraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
      }

      jboolean Fraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_e470b6d9e0d979db]);
      }

      jlong Fraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
      }

      Fraction Fraction::multiply(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_a19d03cf471d5b7e], a0.this$));
      }

      Fraction Fraction::multiply(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_a6342e1f87806d3a], a0));
      }

      Fraction Fraction::negate() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_negate_7847eacc50504e7f]));
      }

      jdouble Fraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_456d9a2f64d6b28d]);
      }

      Fraction Fraction::reciprocal() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_reciprocal_7847eacc50504e7f]));
      }

      jint Fraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_f2f64475e4580546]);
      }

      Fraction Fraction::subtract(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_a19d03cf471d5b7e], a0.this$));
      }

      Fraction Fraction::subtract(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_a6342e1f87806d3a], a0));
      }

      ::java::lang::String Fraction::toString() const
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
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Fraction_abs(t_Fraction *self);
      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg);
      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_getDenominator(t_Fraction *self);
      static PyObject *t_Fraction_getField(t_Fraction *self);
      static PyObject *t_Fraction_getNumerator(t_Fraction *self);
      static PyObject *t_Fraction_getReal(t_Fraction *self);
      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_isInteger(t_Fraction *self);
      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_negate(t_Fraction *self);
      static PyObject *t_Fraction_percentageValue(t_Fraction *self);
      static PyObject *t_Fraction_reciprocal(t_Fraction *self);
      static PyObject *t_Fraction_signum(t_Fraction *self);
      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data);
      static PyGetSetDef t_Fraction__fields_[] = {
        DECLARE_GET_FIELD(t_Fraction, denominator),
        DECLARE_GET_FIELD(t_Fraction, field),
        DECLARE_GET_FIELD(t_Fraction, integer),
        DECLARE_GET_FIELD(t_Fraction, numerator),
        DECLARE_GET_FIELD(t_Fraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Fraction__methods_[] = {
        DECLARE_METHOD(t_Fraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, add, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, compareTo, METH_O),
        DECLARE_METHOD(t_Fraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, getDenominator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getNumerator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction)[] = {
        { Py_tp_methods, t_Fraction__methods_ },
        { Py_tp_init, (void *) t_Fraction_init_ },
        { Py_tp_getset, t_Fraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Fraction, t_Fraction, Fraction);

      void t_Fraction::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction), &PY_TYPE_DEF(Fraction), module, "Fraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(Fraction$ConvergenceTest)));
      }

      void t_Fraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "class_", make_descriptor(Fraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "wrapfn_", make_descriptor(t_Fraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(Fraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "FOUR_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "MINUS_ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_FIFTH", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_HALF", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_QUARTER", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_THIRD", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_THIRDS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ZERO", make_descriptor(t_Fraction::wrap_Object(*Fraction::ZERO)));
      }

      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction::initializeClass, 1)))
          return NULL;
        return t_Fraction::wrap_Object(Fraction(((t_Fraction *) arg)->object.this$));
      }
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = Fraction(a0, a1, a2));
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

      static PyObject *t_Fraction_abs(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg)
      {
        Fraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::Fraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::Fraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Fraction_getDenominator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getField(t_Fraction *self)
      {
        ::org::hipparchus::fraction::FractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(result);
      }

      static PyObject *t_Fraction_getNumerator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumerator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getReal(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        Fraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::getReducedFraction(a0, a1));
          return t_Fraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Fraction_isInteger(t_Fraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Fraction_negate(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_percentageValue(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_reciprocal(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_signum(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data)
      {
        ::org::hipparchus::fraction::FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(value);
      }

      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumerator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoModel.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoModel::class$ = NULL;
          jmethodID *KlobucharIonoModel::mids$ = NULL;
          bool KlobucharIonoModel::live$ = false;

          jclass KlobucharIonoModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_3a8146127c0aa9ca] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_eb8eb219f7351702] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;DDD[D)D");
              mids$[mid_pathDelay_a1a627c36b60b756] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8146127c0aa9ca, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List KlobucharIonoModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_78d4f8498e981bf5], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c824fdb3e595a2ae], a0.this$, a1.this$, a2, a3.this$);
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jdouble a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_eb8eb219f7351702], a0.this$, a1.this$, a2, a3, a4, a5.this$);
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, const JArray< ::org::hipparchus::CalculusFieldElement > & a5) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a1a627c36b60b756], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self);
          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args);
          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data);
          static PyGetSetDef t_KlobucharIonoModel__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoModel__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoModel)[] = {
            { Py_tp_methods, t_KlobucharIonoModel__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoModel_init_ },
            { Py_tp_getset, t_KlobucharIonoModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoModel, t_KlobucharIonoModel, KlobucharIonoModel);

          void t_KlobucharIonoModel::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoModel), &PY_TYPE_DEF(KlobucharIonoModel), module, "KlobucharIonoModel", 0);
          }

          void t_KlobucharIonoModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "class_", make_descriptor(KlobucharIonoModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "wrapfn_", make_descriptor(t_KlobucharIonoModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoModel::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoModel::wrap_Object(KlobucharIonoModel(((t_KlobucharIonoModel *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1, a2));
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

          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 6:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                JArray< ::org::hipparchus::CalculusFieldElement > a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKD[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                jdouble a2;
                jdouble a3;
                jdouble a4;
                JArray< jdouble > a5((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkDDD[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data)
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
