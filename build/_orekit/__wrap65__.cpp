#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory::mids$ = NULL;
        bool GeoMagneticFieldFactory::live$ = false;

        jclass GeoMagneticFieldFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_a3e70fb66ee864fe] = env->getStaticMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getGeoMagneticFields_f938ea66f56d3454] = env->getStaticMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
            mids$[mid_getIGRF_7100d3672aa999e4] = env->getStaticMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_7100d3672aa999e4] = env->getStaticMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getField_a3e70fb66ee864fe], a0.this$, a1));
        }

        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields GeoMagneticFieldFactory::getGeoMagneticFields()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callStaticObjectMethod(cls, mids$[mid_getGeoMagneticFields_f938ea66f56d3454]));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getIGRF(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getIGRF_7100d3672aa999e4], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getWMM(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getWMM_7100d3672aa999e4], a0));
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
        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory, geoMagneticFields),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getGeoMagneticFields, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getIGRF, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getWMM, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory, t_GeoMagneticFieldFactory, GeoMagneticFieldFactory);

        void t_GeoMagneticFieldFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory), &PY_TYPE_DEF(GeoMagneticFieldFactory), module, "GeoMagneticFieldFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "FieldModel", make_descriptor(&PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel)));
        }

        void t_GeoMagneticFieldFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "class_", make_descriptor(GeoMagneticFieldFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory::wrap_Object(GeoMagneticFieldFactory(((t_GeoMagneticFieldFactory *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWMM", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractMatricesHarvester.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractMatricesHarvester::class$ = NULL;
      jmethodID *AbstractMatricesHarvester::mids$ = NULL;
      bool AbstractMatricesHarvester::live$ = false;
      jint AbstractMatricesHarvester::STATE_DIMENSION = (jint) 0;

      jclass AbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_freezeColumnsNames_0640e6acf969ed28] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getInitialJacobianColumn_008e0cff49b0ec83] = env->getMethodID(cls, "getInitialJacobianColumn", "(Ljava/lang/String;)[D");
          mids$[mid_getInitialStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getInitialStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStmName_3cffd47377eca18a] = env->getMethodID(cls, "getStmName", "()Ljava/lang/String;");
          mids$[mid_setReferenceState_8655761ebf04b503] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getConversionJacobian_223e694727d946d7] = env->getMethodID(cls, "getConversionJacobian", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMatricesHarvester::freezeColumnsNames() const
      {
        env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_0640e6acf969ed28]);
      }

      JArray< jdouble > AbstractMatricesHarvester::getInitialJacobianColumn(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialJacobianColumn_008e0cff49b0ec83], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getInitialStateTransitionMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialStateTransitionMatrix_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2], a0.this$));
      }

      ::java::lang::String AbstractMatricesHarvester::getStmName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStmName_3cffd47377eca18a]));
      }

      void AbstractMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_8655761ebf04b503], a0.this$);
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
      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data);
      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data);
      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_AbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, initialStateTransitionMatrix),
        DECLARE_SET_FIELD(t_AbstractMatricesHarvester, referenceState),
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, stmName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_AbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, freezeColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialJacobianColumn, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialStateTransitionMatrix, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStmName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_AbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMatricesHarvester, t_AbstractMatricesHarvester, AbstractMatricesHarvester);

      void t_AbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMatricesHarvester), &PY_TYPE_DEF(AbstractMatricesHarvester), module, "AbstractMatricesHarvester", 0);
      }

      void t_AbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "class_", make_descriptor(AbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractMatricesHarvester::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "STATE_DIMENSION", make_descriptor(AbstractMatricesHarvester::STATE_DIMENSION));
      }

      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_AbstractMatricesHarvester::wrap_Object(AbstractMatricesHarvester(((t_AbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.freezeColumnsNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getInitialJacobianColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getInitialJacobianColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getStmName());
        return j2p(result);
      }

      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }

      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getStmName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ArrayDeque.h"
#include "java/util/Iterator.h"
#include "java/lang/Cloneable.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/Deque.h"
#include "java/util/ArrayDeque.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayDeque::class$ = NULL;
    jmethodID *ArrayDeque::mids$ = NULL;
    bool ArrayDeque::live$ = false;

    jclass ArrayDeque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayDeque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_009757f2c0fd9090] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_009757f2c0fd9090] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_2f402d3ed8db1fe9] = env->getMethodID(cls, "clone", "()Ljava/util/ArrayDeque;");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_834a3801c426326d] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_e661fe3ba2fafb22] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_e661fe3ba2fafb22] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_221e8e85cb385209] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_221e8e85cb385209] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_221e8e85cb385209] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_e661fe3ba2fafb22] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_e661fe3ba2fafb22] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_e661fe3ba2fafb22] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_e661fe3ba2fafb22] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_e661fe3ba2fafb22] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_009757f2c0fd9090] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_e661fe3ba2fafb22] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_removeFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_221e8e85cb385209] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_e661fe3ba2fafb22] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_221e8e85cb385209] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_retainAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_73423092793bcd23] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayDeque::ArrayDeque() : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ArrayDeque::ArrayDeque(jint a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    ArrayDeque::ArrayDeque(const ::java::util::Collection & a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

    jboolean ArrayDeque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    jboolean ArrayDeque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    void ArrayDeque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_009757f2c0fd9090], a0.this$);
    }

    void ArrayDeque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_009757f2c0fd9090], a0.this$);
    }

    void ArrayDeque::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ArrayDeque ArrayDeque::clone() const
    {
      return ArrayDeque(env->callObjectMethod(this$, mids$[mid_clone_2f402d3ed8db1fe9]));
    }

    jboolean ArrayDeque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    ::java::util::Iterator ArrayDeque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_834a3801c426326d]));
    }

    ::java::lang::Object ArrayDeque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_e661fe3ba2fafb22]));
    }

    jboolean ArrayDeque::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator ArrayDeque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jboolean ArrayDeque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_221e8e85cb385209], a0.this$);
    }

    jboolean ArrayDeque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_221e8e85cb385209], a0.this$);
    }

    jboolean ArrayDeque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object ArrayDeque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_e661fe3ba2fafb22]));
    }

    ::java::lang::Object ArrayDeque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_e661fe3ba2fafb22]));
    }

    void ArrayDeque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_009757f2c0fd9090], a0.this$);
    }

    ::java::lang::Object ArrayDeque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_e661fe3ba2fafb22]));
    }

    jboolean ArrayDeque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jboolean ArrayDeque::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_e661fe3ba2fafb22]));
    }

    jboolean ArrayDeque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_e661fe3ba2fafb22]));
    }

    jboolean ArrayDeque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_221e8e85cb385209], a0.this$);
    }

    jboolean ArrayDeque::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_15ecf331dcc5aaf3], a0.this$);
    }

    jint ArrayDeque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Spliterator ArrayDeque::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_73423092793bcd23], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args);
    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data);
    static PyGetSetDef t_ArrayDeque__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayDeque, empty),
      DECLARE_GET_FIELD(t_ArrayDeque, first),
      DECLARE_GET_FIELD(t_ArrayDeque, last),
      DECLARE_GET_FIELD(t_ArrayDeque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayDeque__methods_[] = {
      DECLARE_METHOD(t_ArrayDeque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, addLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, element, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, offer, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, peek, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, poll, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pop, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, push, METH_O),
      DECLARE_METHOD(t_ArrayDeque, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayDeque)[] = {
      { Py_tp_methods, t_ArrayDeque__methods_ },
      { Py_tp_init, (void *) t_ArrayDeque_init_ },
      { Py_tp_getset, t_ArrayDeque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayDeque *)) get_generic_iterator< t_ArrayDeque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayDeque)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(ArrayDeque, t_ArrayDeque, ArrayDeque);
    PyObject *t_ArrayDeque::wrap_Object(const ArrayDeque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayDeque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayDeque::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayDeque), &PY_TYPE_DEF(ArrayDeque), module, "ArrayDeque", 0);
    }

    void t_ArrayDeque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "class_", make_descriptor(ArrayDeque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "wrapfn_", make_descriptor(t_ArrayDeque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayDeque::initializeClass, 1)))
        return NULL;
      return t_ArrayDeque::wrap_Object(ArrayDeque(((t_ArrayDeque *) arg)->object.this$));
    }
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayDeque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayDeque object((jobject) NULL);

          INT_CALL(object = ArrayDeque());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayDeque(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayDeque(a0));
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

    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self)
    {
      ArrayDeque result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return t_ArrayDeque::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
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

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args)
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

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *OrientedPoint::class$ = NULL;
          jmethodID *OrientedPoint::mids$ = NULL;
          bool OrientedPoint::live$ = false;

          jclass OrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/OrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f039d136ebc28ae8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;ZD)V");
              mids$[mid_copySelf_7b945166bba626c5] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/oned/OrientedPoint;");
              mids$[mid_emptyHyperplane_34496686a79d41d6] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_getLocation_466c0ad242ce3f41] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_getOffset_cf1fec2b7b1c0efe] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_b540ea36818b5810] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_89b302893bdbe1f1] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_328d0d966eeb9668] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_revertSelf_0640e6acf969ed28] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_cb9274a363000a77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_34496686a79d41d6] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_wholeSpace_49a234ce53c00b25] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OrientedPoint::OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f039d136ebc28ae8, a0.this$, a1, a2)) {}

          OrientedPoint OrientedPoint::copySelf() const
          {
            return OrientedPoint(env->callObjectMethod(this$, mids$[mid_copySelf_7b945166bba626c5]));
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_34496686a79d41d6]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D OrientedPoint::getLocation() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_getLocation_466c0ad242ce3f41]));
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b540ea36818b5810], a0.this$);
          }

          jdouble OrientedPoint::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          jboolean OrientedPoint::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_89b302893bdbe1f1]);
          }

          ::org::hipparchus::geometry::Point OrientedPoint::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_328d0d966eeb9668], a0.this$));
          }

          void OrientedPoint::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0640e6acf969ed28]);
          }

          jboolean OrientedPoint::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_cb9274a363000a77], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_34496686a79d41d6]));
          }

          ::org::hipparchus::geometry::euclidean::oned::IntervalsSet OrientedPoint::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::IntervalsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_49a234ce53c00b25]));
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
        namespace oned {
          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args);
          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data);
          static PyGetSetDef t_OrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_OrientedPoint, direct),
            DECLARE_GET_FIELD(t_OrientedPoint, location),
            DECLARE_GET_FIELD(t_OrientedPoint, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrientedPoint__methods_[] = {
            DECLARE_METHOD(t_OrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_OrientedPoint, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, project, METH_O),
            DECLARE_METHOD(t_OrientedPoint, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_OrientedPoint, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrientedPoint)[] = {
            { Py_tp_methods, t_OrientedPoint__methods_ },
            { Py_tp_init, (void *) t_OrientedPoint_init_ },
            { Py_tp_getset, t_OrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrientedPoint)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OrientedPoint, t_OrientedPoint, OrientedPoint);

          void t_OrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(OrientedPoint), &PY_TYPE_DEF(OrientedPoint), module, "OrientedPoint", 0);
          }

          void t_OrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "class_", make_descriptor(OrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "wrapfn_", make_descriptor(t_OrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrientedPoint::initializeClass, 1)))
              return NULL;
            return t_OrientedPoint::wrap_Object(OrientedPoint(((t_OrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            OrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrientedPoint(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self)
          {
            OrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_OrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(value);
          }

          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnIncreasing.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnIncreasing::class$ = NULL;
          jmethodID *FieldStopOnIncreasing::mids$ = NULL;
          bool FieldStopOnIncreasing::live$ = false;

          jclass FieldStopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnIncreasing::FieldStopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnIncreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_061886b33964a9af], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args);
          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnIncreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnIncreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnIncreasing)[] = {
            { Py_tp_methods, t_FieldStopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnIncreasing_init_ },
            { Py_tp_getset, t_FieldStopOnIncreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnIncreasing, t_FieldStopOnIncreasing, FieldStopOnIncreasing);
          PyObject *t_FieldStopOnIncreasing::wrap_Object(const FieldStopOnIncreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnIncreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnIncreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnIncreasing *self = (t_FieldStopOnIncreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnIncreasing), &PY_TYPE_DEF(FieldStopOnIncreasing), module, "FieldStopOnIncreasing", 0);
          }

          void t_FieldStopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "class_", make_descriptor(FieldStopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "wrapfn_", make_descriptor(t_FieldStopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnIncreasing::wrap_Object(FieldStopOnIncreasing(((t_FieldStopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnIncreasing_of_(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnIncreasing_init_(t_FieldStopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnIncreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnIncreasing_eventOccurred(t_FieldStopOnIncreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnIncreasing_get__parameters_(t_FieldStopOnIncreasing *self, void *data)
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
#include "org/orekit/utils/PythonMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonMultipleShooting::class$ = NULL;
      jmethodID *PythonMultipleShooting::mids$ = NULL;
      bool PythonMultipleShooting::live$ = false;

      jclass PythonMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compute_0d9551367f7ecdef] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMultipleShooting::PythonMultipleShooting() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self);
      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMultipleShooting)[] = {
        { Py_tp_methods, t_PythonMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonMultipleShooting_init_ },
        { Py_tp_getset, t_PythonMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMultipleShooting, t_PythonMultipleShooting, PythonMultipleShooting);

      void t_PythonMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMultipleShooting), &PY_TYPE_DEF(PythonMultipleShooting), module, "PythonMultipleShooting", 1);
      }

      void t_PythonMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "class_", make_descriptor(PythonMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "wrapfn_", make_descriptor(t_PythonMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "compute", "()Ljava/util/List;", (void *) t_PythonMultipleShooting_compute0 },
          { "pythonDecRef", "()V", (void *) t_PythonMultipleShooting_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonMultipleShooting::wrap_Object(PythonMultipleShooting(((t_PythonMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        PythonMultipleShooting object((jobject) NULL);

        INT_CALL(object = PythonMultipleShooting());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "compute", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("compute", result);
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

      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguityAcceptance::class$ = NULL;
          jmethodID *AmbiguityAcceptance::mids$ = NULL;
          bool AmbiguityAcceptance::live$ = false;

          jclass AmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_accept_21ad48006d2406de] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_412668abc8d889e9] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution AmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_21ad48006d2406de], a0.this$));
          }

          jint AmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_412668abc8d889e9]);
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
          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self);

          static PyMethodDef t_AmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_AmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_AmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguityAcceptance)[] = {
            { Py_tp_methods, t_AmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguityAcceptance, t_AmbiguityAcceptance, AmbiguityAcceptance);

          void t_AmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguityAcceptance), &PY_TYPE_DEF(AmbiguityAcceptance), module, "AmbiguityAcceptance", 0);
          }

          void t_AmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "class_", make_descriptor(AmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "wrapfn_", make_descriptor(t_AmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_AmbiguityAcceptance::wrap_Object(AmbiguityAcceptance(((t_AmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter::class$ = NULL;
      jmethodID *GaussianCurveFitter::mids$ = NULL;
      bool GaussianCurveFitter::live$ = false;

      jclass GaussianCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_6a254a05c2e004ab] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withMaxIterations_3fbe23c1f0cf1e2f] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_withStartPoint_8fbf17fa300ec65b] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/GaussianCurveFitter;");
          mids$[mid_getProblem_cf073573d4101d89] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter GaussianCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return GaussianCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_6a254a05c2e004ab]));
      }

      GaussianCurveFitter GaussianCurveFitter::withMaxIterations(jint a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_3fbe23c1f0cf1e2f], a0));
      }

      GaussianCurveFitter GaussianCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return GaussianCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_8fbf17fa300ec65b], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type);
      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg);
      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg);

      static PyMethodDef t_GaussianCurveFitter__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_GaussianCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter)[] = {
        { Py_tp_methods, t_GaussianCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter, t_GaussianCurveFitter, GaussianCurveFitter);

      void t_GaussianCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter), &PY_TYPE_DEF(GaussianCurveFitter), module, "GaussianCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser)));
      }

      void t_GaussianCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "class_", make_descriptor(GaussianCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "wrapfn_", make_descriptor(t_GaussianCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter::wrap_Object(GaussianCurveFitter(((t_GaussianCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GaussianCurveFitter_create(PyTypeObject *type)
      {
        GaussianCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::GaussianCurveFitter::create());
        return t_GaussianCurveFitter::wrap_Object(result);
      }

      static PyObject *t_GaussianCurveFitter_withMaxIterations(t_GaussianCurveFitter *self, PyObject *arg)
      {
        jint a0;
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_GaussianCurveFitter_withStartPoint(t_GaussianCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        GaussianCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_GaussianCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanModel.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanModel::mids$ = NULL;
        bool SemiAnalyticalKalmanModel::live$ = false;

        jclass SemiAnalyticalKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_6f886d47d0124943] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_55b445719d7de2a7] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_0cd5cd5bc4d32a91] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_ebde746c06b90598] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_e958eadec739b50c] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getObserver_25fab8044126746b] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_d63c8a40f144939b] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_4275515b1ffe8ceb] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_8655761ebf04b503] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateReferenceTrajectory_ca23f13ffad40372] = env->getMethodID(cls, "updateReferenceTrajectory", "(Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;)V");
            mids$[mid_updateShortPeriods_8655761ebf04b503] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_6f886d47d0124943], a0.this$, a1.this$);
        }

        void SemiAnalyticalKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_7a97f7e149e79afb]));
        }

        jint SemiAnalyticalKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_55b445719d7de2a7]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_0cd5cd5bc4d32a91]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution SemiAnalyticalKalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_ebde746c06b90598], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_e958eadec739b50c], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_25fab8044126746b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_75d50d73180655b4]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_5dccf571345671af]));
        }

        void SemiAnalyticalKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_d63c8a40f144939b], a0.this$, a1.this$));
        }

        void SemiAnalyticalKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4275515b1ffe8ceb], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_8655761ebf04b503], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateReferenceTrajectory(const ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateReferenceTrajectory_ca23f13ffad40372], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_8655761ebf04b503], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data);
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagator),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateReferenceTrajectory, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanModel, t_SemiAnalyticalKalmanModel, SemiAnalyticalKalmanModel);

        void t_SemiAnalyticalKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanModel), &PY_TYPE_DEF(SemiAnalyticalKalmanModel), module, "SemiAnalyticalKalmanModel", 0);
        }

        void t_SemiAnalyticalKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "class_", make_descriptor(SemiAnalyticalKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanModel::wrap_Object(SemiAnalyticalKalmanModel(((t_SemiAnalyticalKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_ExtendedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateReferenceTrajectory(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateReferenceTrajectory", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ShadowModel::class$ = NULL;
              jmethodID *ShadowModel::mids$ = NULL;
              bool ShadowModel::live$ = false;
              ShadowModel *ShadowModel::CONE = NULL;
              ShadowModel *ShadowModel::CYLINDRICAL = NULL;
              ShadowModel *ShadowModel::DUAL_CONE = NULL;
              ShadowModel *ShadowModel::NONE = NULL;

              jclass ShadowModel::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_c6411c080d938c05] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_values_f233c5f9ced57b9f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CONE = new ShadowModel(env->getStaticObjectField(cls, "CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  CYLINDRICAL = new ShadowModel(env->getStaticObjectField(cls, "CYLINDRICAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  DUAL_CONE = new ShadowModel(env->getStaticObjectField(cls, "DUAL_CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  NONE = new ShadowModel(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShadowModel ShadowModel::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShadowModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c6411c080d938c05], a0.this$));
              }

              JArray< ShadowModel > ShadowModel::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShadowModel >(env->callStaticObjectMethod(cls, mids$[mid_values_f233c5f9ced57b9f]));
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
              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args);
              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShadowModel_values(PyTypeObject *type);
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data);
              static PyGetSetDef t_ShadowModel__fields_[] = {
                DECLARE_GET_FIELD(t_ShadowModel, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShadowModel__methods_[] = {
                DECLARE_METHOD(t_ShadowModel, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShadowModel, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShadowModel)[] = {
                { Py_tp_methods, t_ShadowModel__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShadowModel__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShadowModel)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShadowModel, t_ShadowModel, ShadowModel);
              PyObject *t_ShadowModel::wrap_Object(const ShadowModel& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShadowModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShadowModel::install(PyObject *module)
              {
                installType(&PY_TYPE(ShadowModel), &PY_TYPE_DEF(ShadowModel), module, "ShadowModel", 0);
              }

              void t_ShadowModel::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "class_", make_descriptor(ShadowModel::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "wrapfn_", make_descriptor(t_ShadowModel::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShadowModel::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CYLINDRICAL", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CYLINDRICAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "DUAL_CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::DUAL_CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "NONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::NONE)));
              }

              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShadowModel::initializeClass, 1)))
                  return NULL;
                return t_ShadowModel::wrap_Object(ShadowModel(((t_ShadowModel *) arg)->object.this$));
              }
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShadowModel::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShadowModel result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::valueOf(a0));
                  return t_ShadowModel::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShadowModel_values(PyTypeObject *type)
              {
                JArray< ShadowModel > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::values());
                return JArray<jobject>(result.this$).wrap(t_ShadowModel::wrap_jobject);
              }
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data)
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
#include "org/orekit/data/DelaunayArguments.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DelaunayArguments::class$ = NULL;
      jmethodID *DelaunayArguments::mids$ = NULL;
      bool DelaunayArguments::live$ = false;

      jclass DelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_93cd117b5bd418cf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDD)V");
          mids$[mid_getD_557b8123390d8d0c] = env->getMethodID(cls, "getD", "()D");
          mids$[mid_getDDot_557b8123390d8d0c] = env->getMethodID(cls, "getDDot", "()D");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getF_557b8123390d8d0c] = env->getMethodID(cls, "getF", "()D");
          mids$[mid_getFDot_557b8123390d8d0c] = env->getMethodID(cls, "getFDot", "()D");
          mids$[mid_getGamma_557b8123390d8d0c] = env->getMethodID(cls, "getGamma", "()D");
          mids$[mid_getGammaDot_557b8123390d8d0c] = env->getMethodID(cls, "getGammaDot", "()D");
          mids$[mid_getL_557b8123390d8d0c] = env->getMethodID(cls, "getL", "()D");
          mids$[mid_getLDot_557b8123390d8d0c] = env->getMethodID(cls, "getLDot", "()D");
          mids$[mid_getLPrime_557b8123390d8d0c] = env->getMethodID(cls, "getLPrime", "()D");
          mids$[mid_getLPrimeDot_557b8123390d8d0c] = env->getMethodID(cls, "getLPrimeDot", "()D");
          mids$[mid_getOmega_557b8123390d8d0c] = env->getMethodID(cls, "getOmega", "()D");
          mids$[mid_getOmegaDot_557b8123390d8d0c] = env->getMethodID(cls, "getOmegaDot", "()D");
          mids$[mid_getTC_557b8123390d8d0c] = env->getMethodID(cls, "getTC", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DelaunayArguments::DelaunayArguments(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93cd117b5bd418cf, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)) {}

      jdouble DelaunayArguments::getD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getD_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getDDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDDot_557b8123390d8d0c]);
      }

      ::org::orekit::time::AbsoluteDate DelaunayArguments::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble DelaunayArguments::getF() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getF_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getFDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFDot_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getGamma() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getGammaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGammaDot_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getL() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getLDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getLPrime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrime_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getLPrimeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrimeDot_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getOmega() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmega_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getOmegaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_557b8123390d8d0c]);
      }

      jdouble DelaunayArguments::getTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTC_557b8123390d8d0c]);
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
      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data);
      static PyGetSetDef t_DelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_DelaunayArguments, d),
        DECLARE_GET_FIELD(t_DelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, date),
        DECLARE_GET_FIELD(t_DelaunayArguments, f),
        DECLARE_GET_FIELD(t_DelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_DelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, l),
        DECLARE_GET_FIELD(t_DelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, omega),
        DECLARE_GET_FIELD(t_DelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, tC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_DelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DelaunayArguments)[] = {
        { Py_tp_methods, t_DelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_DelaunayArguments_init_ },
        { Py_tp_getset, t_DelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DelaunayArguments, t_DelaunayArguments, DelaunayArguments);

      void t_DelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(DelaunayArguments), &PY_TYPE_DEF(DelaunayArguments), module, "DelaunayArguments", 0);
      }

      void t_DelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "class_", make_descriptor(DelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "wrapfn_", make_descriptor(t_DelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_DelaunayArguments::wrap_Object(DelaunayArguments(((t_DelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        jdouble a13;
        DelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
        {
          INT_CALL(object = DelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getF());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGamma());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGammaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmega());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getF());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGamma());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGammaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmega());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTC());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitType::class$ = NULL;
      jmethodID *LibrationOrbitType::mids$ = NULL;
      bool LibrationOrbitType::live$ = false;
      LibrationOrbitType *LibrationOrbitType::HALO = NULL;
      LibrationOrbitType *LibrationOrbitType::LYAPUNOV = NULL;

      jclass LibrationOrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_01887543342b1b3c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitType;");
          mids$[mid_values_1eceb4db80802b41] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HALO = new LibrationOrbitType(env->getStaticObjectField(cls, "HALO", "Lorg/orekit/orbits/LibrationOrbitType;"));
          LYAPUNOV = new LibrationOrbitType(env->getStaticObjectField(cls, "LYAPUNOV", "Lorg/orekit/orbits/LibrationOrbitType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitType LibrationOrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_01887543342b1b3c], a0.this$));
      }

      JArray< LibrationOrbitType > LibrationOrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_1eceb4db80802b41]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args);
      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data);
      static PyGetSetDef t_LibrationOrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitType__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitType)[] = {
        { Py_tp_methods, t_LibrationOrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitType, t_LibrationOrbitType, LibrationOrbitType);
      PyObject *t_LibrationOrbitType::wrap_Object(const LibrationOrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitType), &PY_TYPE_DEF(LibrationOrbitType), module, "LibrationOrbitType", 0);
      }

      void t_LibrationOrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "class_", make_descriptor(LibrationOrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "wrapfn_", make_descriptor(t_LibrationOrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "HALO", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::HALO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "LYAPUNOV", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::LYAPUNOV)));
      }

      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitType::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitType::wrap_Object(LibrationOrbitType(((t_LibrationOrbitType *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::valueOf(a0));
          return t_LibrationOrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitType::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataContext.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataContext::class$ = NULL;
      jmethodID *PythonDataContext::mids$ = NULL;
      bool PythonDataContext::live$ = false;

      jclass PythonDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCelestialBodies_a9d31e254defc040] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_efd6f6d0fc89f7ce] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_ac4b7520cc429937] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_d0ea355ca6d68d00] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_ac9ef17f951ae11a] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataContext::PythonDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonDataContext::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonDataContext::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonDataContext::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self);
      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args);
      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data);
      static PyGetSetDef t_PythonDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataContext, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataContext__methods_[] = {
        DECLARE_METHOD(t_PythonDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataContext, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataContext)[] = {
        { Py_tp_methods, t_PythonDataContext__methods_ },
        { Py_tp_init, (void *) t_PythonDataContext_init_ },
        { Py_tp_getset, t_PythonDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataContext, t_PythonDataContext, PythonDataContext);

      void t_PythonDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataContext), &PY_TYPE_DEF(PythonDataContext), module, "PythonDataContext", 1);
      }

      void t_PythonDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "class_", make_descriptor(PythonDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "wrapfn_", make_descriptor(t_PythonDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataContext::initializeClass);
        JNINativeMethod methods[] = {
          { "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;", (void *) t_PythonDataContext_getCelestialBodies0 },
          { "getFrames", "()Lorg/orekit/frames/Frames;", (void *) t_PythonDataContext_getFrames1 },
          { "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;", (void *) t_PythonDataContext_getGeoMagneticFields2 },
          { "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;", (void *) t_PythonDataContext_getGravityFields3 },
          { "getTimeScales", "()Lorg/orekit/time/TimeScales;", (void *) t_PythonDataContext_getTimeScales4 },
          { "pythonDecRef", "()V", (void *) t_PythonDataContext_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataContext::initializeClass, 1)))
          return NULL;
        return t_PythonDataContext::wrap_Object(PythonDataContext(((t_PythonDataContext *) arg)->object.this$));
      }
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds)
      {
        PythonDataContext object((jobject) NULL);

        INT_CALL(object = PythonDataContext());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCelestialBodies", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &value))
        {
          throwTypeError("getCelestialBodies", result);
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

      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frames value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frames::initializeClass, &value))
        {
          throwTypeError("getFrames", result);
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

      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeoMagneticFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &value))
        {
          throwTypeError("getGeoMagneticFields", result);
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

      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGravityFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &value))
        {
          throwTypeError("getGravityFields", result);
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

      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeScales value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTimeScales", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeScales::initializeClass, &value))
        {
          throwTypeError("getTimeScales", result);
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

      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data)
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
#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/util/List.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView::class$ = NULL;
        jmethodID *PolygonalFieldOfView::mids$ = NULL;
        bool PolygonalFieldOfView::live$ = false;

        jclass PolygonalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5d74c35edd4a312a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_6e7a41e023f7503b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
            mids$[mid_getFootprint_37f5cab3ae6d781a] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getZone_1223d06efa3ccad7] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_5d74c35edd4a312a, a0.this$, a1)) {}

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jint a4, jdouble a5) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_6e7a41e023f7503b, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

        ::java::util::List PolygonalFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_37f5cab3ae6d781a], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet PolygonalFieldOfView::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_1223d06efa3ccad7]));
        }

        jdouble PolygonalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_d0bb3aecf00cc465], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolygonalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_b48aa9aef740fa79], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self);
        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView, zone),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getZone, METH_NOARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PolygonalFieldOfView_init_ },
          { Py_tp_getset, t_PolygonalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView, t_PolygonalFieldOfView, PolygonalFieldOfView);

        void t_PolygonalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView), &PY_TYPE_DEF(PolygonalFieldOfView), module, "PolygonalFieldOfView", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "DefiningConeType", make_descriptor(&PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType)));
        }

        void t_PolygonalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "class_", make_descriptor(PolygonalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "wrapfn_", make_descriptor(t_PolygonalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView::wrap_Object(PolygonalFieldOfView(((t_PolygonalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jint a4;
              jdouble a5;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "kKkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::geometry::fov::t_PolygonalFieldOfView$DefiningConeType::parameters_, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTleKey::class$ = NULL;
              jmethodID *OmmTleKey::mids$ = NULL;
              bool OmmTleKey::live$ = false;
              OmmTleKey *OmmTleKey::AGOM = NULL;
              OmmTleKey *OmmTleKey::BSTAR = NULL;
              OmmTleKey *OmmTleKey::BTERM = NULL;
              OmmTleKey *OmmTleKey::CLASSIFICATION_TYPE = NULL;
              OmmTleKey *OmmTleKey::COMMENT = NULL;
              OmmTleKey *OmmTleKey::ELEMENT_SET_NO = NULL;
              OmmTleKey *OmmTleKey::EPHEMERIS_TYPE = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DDOT = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DOT = NULL;
              OmmTleKey *OmmTleKey::NORAD_CAT_ID = NULL;
              OmmTleKey *OmmTleKey::REV_AT_EPOCH = NULL;

              jclass OmmTleKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_a0ba3873c2275559] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;)Z");
                  mids$[mid_valueOf_dc5c2d929549cd5d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");
                  mids$[mid_values_49a67daa00f555d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AGOM = new OmmTleKey(env->getStaticObjectField(cls, "AGOM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BSTAR = new OmmTleKey(env->getStaticObjectField(cls, "BSTAR", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BTERM = new OmmTleKey(env->getStaticObjectField(cls, "BTERM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  CLASSIFICATION_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "CLASSIFICATION_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  COMMENT = new OmmTleKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  ELEMENT_SET_NO = new OmmTleKey(env->getStaticObjectField(cls, "ELEMENT_SET_NO", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  EPHEMERIS_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "EPHEMERIS_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DDOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  NORAD_CAT_ID = new OmmTleKey(env->getStaticObjectField(cls, "NORAD_CAT_ID", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  REV_AT_EPOCH = new OmmTleKey(env->getStaticObjectField(cls, "REV_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmTleKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_a0ba3873c2275559], a0.this$, a1.this$, a2.this$);
              }

              OmmTleKey OmmTleKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmTleKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dc5c2d929549cd5d], a0.this$));
              }

              JArray< OmmTleKey > OmmTleKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmTleKey >(env->callStaticObjectMethod(cls, mids$[mid_values_49a67daa00f555d9]));
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
            namespace omm {
              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmTleKey_values(PyTypeObject *type);
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data);
              static PyGetSetDef t_OmmTleKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmTleKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTleKey__methods_[] = {
                DECLARE_METHOD(t_OmmTleKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTleKey)[] = {
                { Py_tp_methods, t_OmmTleKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmTleKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTleKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmTleKey, t_OmmTleKey, OmmTleKey);
              PyObject *t_OmmTleKey::wrap_Object(const OmmTleKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmTleKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmTleKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTleKey), &PY_TYPE_DEF(OmmTleKey), module, "OmmTleKey", 0);
              }

              void t_OmmTleKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "class_", make_descriptor(OmmTleKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "wrapfn_", make_descriptor(t_OmmTleKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTleKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "AGOM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::AGOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BSTAR", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BSTAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BTERM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BTERM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "CLASSIFICATION_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::CLASSIFICATION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "COMMENT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "ELEMENT_SET_NO", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::ELEMENT_SET_NO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "EPHEMERIS_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::EPHEMERIS_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DDOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DDOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "NORAD_CAT_ID", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::NORAD_CAT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "REV_AT_EPOCH", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::REV_AT_EPOCH)));
              }

              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTleKey::initializeClass, 1)))
                  return NULL;
                return t_OmmTleKey::wrap_Object(OmmTleKey(((t_OmmTleKey *) arg)->object.this$));
              }
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTleKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmTleKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::valueOf(a0));
                  return t_OmmTleKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmTleKey_values(PyTypeObject *type)
              {
                JArray< OmmTleKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmTleKey::wrap_jobject);
              }
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction::class$ = NULL;
        jmethodID *PolynomialFunction::mids$ = NULL;
        bool PolynomialFunction::live$ = false;

        jclass PolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_add_9b28b9c1f8a5c1e6] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_antiDerivative_1de01c95bfe9897b] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_degree_412668abc8d889e9] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_a53a7513ecedada2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_integrate_2268d18be49a6087] = env->getMethodID(cls, "integrate", "(DD)D");
            mids$[mid_multiply_9b28b9c1f8a5c1e6] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_negate_1de01c95bfe9897b] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_polynomialDerivative_1de01c95bfe9897b] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_subtract_9b28b9c1f8a5c1e6] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_evaluate_05f591cf0826202b] = env->getStaticMethodID(cls, "evaluate", "([DD)D");
            mids$[mid_differentiate_1db7c087750eaffe] = env->getStaticMethodID(cls, "differentiate", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction::PolynomialFunction(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

        PolynomialFunction PolynomialFunction::add(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_9b28b9c1f8a5c1e6], a0.this$));
        }

        PolynomialFunction PolynomialFunction::antiDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_1de01c95bfe9897b]));
        }

        jint PolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_412668abc8d889e9]);
        }

        jboolean PolynomialFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        JArray< jdouble > PolynomialFunction::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_a53a7513ecedada2]));
        }

        jint PolynomialFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        jdouble PolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_2268d18be49a6087], a0, a1);
        }

        PolynomialFunction PolynomialFunction::multiply(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_9b28b9c1f8a5c1e6], a0.this$));
        }

        PolynomialFunction PolynomialFunction::negate() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_1de01c95bfe9897b]));
        }

        PolynomialFunction PolynomialFunction::polynomialDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_1de01c95bfe9897b]));
        }

        PolynomialFunction PolynomialFunction::subtract(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_9b28b9c1f8a5c1e6], a0.this$));
        }

        ::java::lang::String PolynomialFunction::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }

        jdouble PolynomialFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data);
        static PyGetSetDef t_PolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunction, coefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, toString, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction)[] = {
          { Py_tp_methods, t_PolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction_init_ },
          { Py_tp_getset, t_PolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction, t_PolynomialFunction, PolynomialFunction);

        void t_PolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction), &PY_TYPE_DEF(PolynomialFunction), module, "PolynomialFunction", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "Parametric", make_descriptor(&PY_TYPE_DEF(PolynomialFunction$Parametric)));
        }

        void t_PolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "class_", make_descriptor(PolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "wrapfn_", make_descriptor(t_PolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction::wrap_Object(PolynomialFunction(((t_PolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          PolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            INT_CALL(object = PolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args)
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
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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

        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SEMParser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/io/InputStream.h"
#include "java/lang/Integer.h"
#include "java/text/ParseException.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SEMParser::class$ = NULL;
      jmethodID *SEMParser::mids$ = NULL;
      bool SEMParser::live$ = false;

      jclass SEMParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SEMParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_f930d4f5e3f73cb2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_0d9551367f7ecdef] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_0d9551367f7ecdef] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_0640e6acf969ed28] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SEMParser::SEMParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      SEMParser::SEMParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f930d4f5e3f73cb2, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List SEMParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_0d9551367f7ecdef]));
      }

      ::java::util::List SEMParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_0d9551367f7ecdef]));
      }

      ::java::lang::String SEMParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
      }

      void SEMParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_0640e6acf969ed28]);
      }

      void SEMParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
      }

      jboolean SEMParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self);
      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self);
      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self);
      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args);
      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self);
      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data);
      static PyGetSetDef t_SEMParser__fields_[] = {
        DECLARE_GET_FIELD(t_SEMParser, almanacs),
        DECLARE_GET_FIELD(t_SEMParser, pRNNumbers),
        DECLARE_GET_FIELD(t_SEMParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SEMParser__methods_[] = {
        DECLARE_METHOD(t_SEMParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_SEMParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SEMParser)[] = {
        { Py_tp_methods, t_SEMParser__methods_ },
        { Py_tp_init, (void *) t_SEMParser_init_ },
        { Py_tp_getset, t_SEMParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SEMParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(SEMParser, t_SEMParser, SEMParser);

      void t_SEMParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SEMParser), &PY_TYPE_DEF(SEMParser), module, "SEMParser", 0);
      }

      void t_SEMParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "class_", make_descriptor(SEMParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "wrapfn_", make_descriptor(t_SEMParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SEMParser::initializeClass, 1)))
          return NULL;
        return t_SEMParser::wrap_Object(SEMParser(((t_SEMParser *) arg)->object.this$));
      }
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SEMParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = SEMParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SEMParser(a0, a1, a2));
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

      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonObservedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonObservedMeasurement::class$ = NULL;
        jmethodID *PythonObservedMeasurement::mids$ = NULL;
        bool PythonObservedMeasurement::live$ = false;

        jclass PythonObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_compareTo_0a393ed00cc2801f] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_estimate_eae039ee8c8a4a4d] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBaseWeight_a53a7513ecedada2] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_3cffd47377eca18a] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_a53a7513ecedada2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_0d9551367f7ecdef] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_89b302893bdbe1f1] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEnabled_ed2afdb8506b9742] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonObservedMeasurement::PythonObservedMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonObservedMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonObservedMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonObservedMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args);
        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self);
        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args);
        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0);
        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data);
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data);
        static PyGetSetDef t_PythonObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, self),
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonObservedMeasurement)[] = {
          { Py_tp_methods, t_PythonObservedMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonObservedMeasurement_init_ },
          { Py_tp_getset, t_PythonObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonObservedMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonObservedMeasurement, t_PythonObservedMeasurement, PythonObservedMeasurement);
        PyObject *t_PythonObservedMeasurement::wrap_Object(const PythonObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonObservedMeasurement), &PY_TYPE_DEF(PythonObservedMeasurement), module, "PythonObservedMeasurement", 1);
        }

        void t_PythonObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "class_", make_descriptor(PythonObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "wrapfn_", make_descriptor(t_PythonObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonObservedMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonObservedMeasurement_addModifier0 },
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonObservedMeasurement_compareTo1 },
            { "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonObservedMeasurement_estimate2 },
            { "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonObservedMeasurement_estimateWithoutDerivatives3 },
            { "getBaseWeight", "()[D", (void *) t_PythonObservedMeasurement_getBaseWeight4 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonObservedMeasurement_getDate5 },
            { "getDimension", "()I", (void *) t_PythonObservedMeasurement_getDimension6 },
            { "getMeasurementType", "()Ljava/lang/String;", (void *) t_PythonObservedMeasurement_getMeasurementType7 },
            { "getModifiers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getModifiers8 },
            { "getObservedValue", "()[D", (void *) t_PythonObservedMeasurement_getObservedValue9 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getParametersDrivers10 },
            { "getSatellites", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getSatellites11 },
            { "getTheoreticalStandardDeviation", "()[D", (void *) t_PythonObservedMeasurement_getTheoreticalStandardDeviation12 },
            { "isEnabled", "()Z", (void *) t_PythonObservedMeasurement_isEnabled13 },
            { "pythonDecRef", "()V", (void *) t_PythonObservedMeasurement_pythonDecRef14 },
            { "setEnabled", "(Z)V", (void *) t_PythonObservedMeasurement_setEnabled15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonObservedMeasurement::wrap_Object(PythonObservedMeasurement(((t_PythonObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonObservedMeasurement object((jobject) NULL);

          INT_CALL(object = PythonObservedMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
          PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimate", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("estimate", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimateWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("estimateWithoutDerivatives", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBaseWeight", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getBaseWeight", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMeasurementType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getMeasurementType", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getModifiers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getTheoreticalStandardDeviation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getTheoreticalStandardDeviation", result);
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

        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isEnabled", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = (a0 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "setEnabled", "O", o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data)
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
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SimpleUnivariateValueChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SimpleUnivariateValueChecker::class$ = NULL;
        jmethodID *SimpleUnivariateValueChecker::mids$ = NULL;
        bool SimpleUnivariateValueChecker::live$ = false;

        jclass SimpleUnivariateValueChecker::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SimpleUnivariateValueChecker");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_converged_66d6b2091f6de5a1] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/univariate/UnivariatePointValuePair;Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

        jboolean SimpleUnivariateValueChecker::converged(jint a0, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a1, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_converged_66d6b2091f6de5a1], a0, a1.this$, a2.this$);
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
      namespace univariate {
        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data);
        static PyGetSetDef t_SimpleUnivariateValueChecker__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleUnivariateValueChecker, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleUnivariateValueChecker__methods_[] = {
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, converged, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleUnivariateValueChecker)[] = {
          { Py_tp_methods, t_SimpleUnivariateValueChecker__methods_ },
          { Py_tp_init, (void *) t_SimpleUnivariateValueChecker_init_ },
          { Py_tp_getset, t_SimpleUnivariateValueChecker__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleUnivariateValueChecker)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
          NULL
        };

        DEFINE_TYPE(SimpleUnivariateValueChecker, t_SimpleUnivariateValueChecker, SimpleUnivariateValueChecker);
        PyObject *t_SimpleUnivariateValueChecker::wrap_Object(const SimpleUnivariateValueChecker& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimpleUnivariateValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimpleUnivariateValueChecker::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleUnivariateValueChecker), &PY_TYPE_DEF(SimpleUnivariateValueChecker), module, "SimpleUnivariateValueChecker", 0);
        }

        void t_SimpleUnivariateValueChecker::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "class_", make_descriptor(SimpleUnivariateValueChecker::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "wrapfn_", make_descriptor(t_SimpleUnivariateValueChecker::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 1)))
            return NULL;
          return t_SimpleUnivariateValueChecker::wrap_Object(SimpleUnivariateValueChecker(((t_SimpleUnivariateValueChecker *) arg)->object.this$));
        }
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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

        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a1((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.converged(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SimpleUnivariateValueChecker), (PyObject *) self, "converged", args, 2);
        }
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractODEDetector::class$ = NULL;
        jmethodID *AbstractODEDetector::mids$ = NULL;
        bool AbstractODEDetector::live$ = false;
        jdouble AbstractODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_4a3e96b6f1af9d91] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_1066bb0522dfdb81] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_f27f9c0aa71fac14] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_88c9da53bb1865ce] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_ea512a716b02ce4d] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_7f1492bbe3772e53] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_e7dbeb50f7049b2b] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/AdaptableInterval;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxIter_35638c0b37ecd5a2] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withSolver_911e24e8e0609b5d] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withThreshold_7f1492bbe3772e53] = env->getMethodID(cls, "withThreshold", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_create_bc7049580916f64e] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractODEDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_4a3e96b6f1af9d91], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler AbstractODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_1066bb0522dfdb81]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval AbstractODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_f27f9c0aa71fac14]));
        }

        jint AbstractODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver AbstractODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_88c9da53bb1865ce]));
        }

        void AbstractODEDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
        }

        jboolean AbstractODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        AbstractODEDetector AbstractODEDetector::withHandler(const ::org::hipparchus::ode::events::ODEEventHandler & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_ea512a716b02ce4d], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_7f1492bbe3772e53], a0));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::AdaptableInterval & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_e7dbeb50f7049b2b], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxIter(jint a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_35638c0b37ecd5a2], a0));
        }

        AbstractODEDetector AbstractODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_911e24e8e0609b5d], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withThreshold(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_7f1492bbe3772e53], a0));
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
        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data);
        static PyGetSetDef t_AbstractODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEDetector)[] = {
          { Py_tp_methods, t_AbstractODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEDetector, t_AbstractODEDetector, AbstractODEDetector);
        PyObject *t_AbstractODEDetector::wrap_Object(const AbstractODEDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEDetector), &PY_TYPE_DEF(AbstractODEDetector), module, "AbstractODEDetector", 0);
        }

        void t_AbstractODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "class_", make_descriptor(AbstractODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "wrapfn_", make_descriptor(t_AbstractODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractODEDetector::wrap_Object(AbstractODEDetector(((t_AbstractODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::ODEEventHandler a0((jobject) NULL);
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::AdaptableInterval a0((jobject) NULL);
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariateInterpolator::class$ = NULL;
        jmethodID *UnivariateInterpolator::mids$ = NULL;
        bool UnivariateInterpolator::live$ = false;

        jclass UnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_f70e3a7ad4658836] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::UnivariateFunction UnivariateInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_f70e3a7ad4658836], a0.this$, a1.this$));
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
        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateInterpolator)[] = {
          { Py_tp_methods, t_UnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateInterpolator, t_UnivariateInterpolator, UnivariateInterpolator);

        void t_UnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateInterpolator), &PY_TYPE_DEF(UnivariateInterpolator), module, "UnivariateInterpolator", 0);
        }

        void t_UnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "class_", make_descriptor(UnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "wrapfn_", make_descriptor(t_UnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariateInterpolator::wrap_Object(UnivariateInterpolator(((t_UnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
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
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *MessageObserver::class$ = NULL;
          jmethodID *MessageObserver::mids$ = NULL;
          bool MessageObserver::live$ = false;

          jclass MessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/MessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_messageAvailable_5e983d1774bbd3db] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MessageObserver::messageAvailable(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::messages::ParsedMessage & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_messageAvailable_5e983d1774bbd3db], a0.this$, a1.this$);
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
        namespace ntrip {
          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args);

          static PyMethodDef t_MessageObserver__methods_[] = {
            DECLARE_METHOD(t_MessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, messageAvailable, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageObserver)[] = {
            { Py_tp_methods, t_MessageObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageObserver, t_MessageObserver, MessageObserver);

          void t_MessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageObserver), &PY_TYPE_DEF(MessageObserver), module, "MessageObserver", 0);
          }

          void t_MessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "class_", make_descriptor(MessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "wrapfn_", make_descriptor(t_MessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageObserver::initializeClass, 1)))
              return NULL;
            return t_MessageObserver::wrap_Object(MessageObserver(((t_MessageObserver *) arg)->object.this$));
          }
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::messages::ParsedMessage a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.messageAvailable(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "messageAvailable", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *ConvertingRuleFactory::class$ = NULL;
          jmethodID *ConvertingRuleFactory::mids$ = NULL;
          bool ConvertingRuleFactory::live$ = false;

          jclass ConvertingRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f9059ad5e70fba0e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/gauss/FieldRuleFactory;)V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConvertingRuleFactory::ConvertingRuleFactory(const ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory & a0) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_f9059ad5e70fba0e, a0.this$)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args);
          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data);
          static PyGetSetDef t_ConvertingRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_ConvertingRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConvertingRuleFactory__methods_[] = {
            DECLARE_METHOD(t_ConvertingRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConvertingRuleFactory)[] = {
            { Py_tp_methods, t_ConvertingRuleFactory__methods_ },
            { Py_tp_init, (void *) t_ConvertingRuleFactory_init_ },
            { Py_tp_getset, t_ConvertingRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConvertingRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(ConvertingRuleFactory, t_ConvertingRuleFactory, ConvertingRuleFactory);
          PyObject *t_ConvertingRuleFactory::wrap_Object(const ConvertingRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ConvertingRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ConvertingRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(ConvertingRuleFactory), &PY_TYPE_DEF(ConvertingRuleFactory), module, "ConvertingRuleFactory", 0);
          }

          void t_ConvertingRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "class_", make_descriptor(ConvertingRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "wrapfn_", make_descriptor(t_ConvertingRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConvertingRuleFactory::initializeClass, 1)))
              return NULL;
            return t_ConvertingRuleFactory::wrap_Object(ConvertingRuleFactory(((t_ConvertingRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConvertingRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory a0((jobject) NULL);
            PyTypeObject **p0;
            ConvertingRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::gauss::t_FieldRuleFactory::parameters_))
            {
              INT_CALL(object = ConvertingRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/ZeisModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ZeisModel::class$ = NULL;
            jmethodID *ZeisModel::mids$ = NULL;
            bool ZeisModel::live$ = false;

            jclass ZeisModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ZeisModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeC2Z_a95be6a864781ae1] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)D");
                mids$[mid_computeC2Z_e0c6c5b6e976ac94] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ZeisModel::ZeisModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_computeC2Z_a95be6a864781ae1], a0.this$);
            }

            ::org::hipparchus::CalculusFieldElement ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeC2Z_e0c6c5b6e976ac94], a0.this$));
            }

            JArray< jdouble > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e], a0.this$));
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
            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args);
            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args);

            static PyMethodDef t_ZeisModel__methods_[] = {
              DECLARE_METHOD(t_ZeisModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, computeC2Z, METH_VARARGS),
              DECLARE_METHOD(t_ZeisModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ZeisModel)[] = {
              { Py_tp_methods, t_ZeisModel__methods_ },
              { Py_tp_init, (void *) t_ZeisModel_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ZeisModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ZeisModel, t_ZeisModel, ZeisModel);

            void t_ZeisModel::install(PyObject *module)
            {
              installType(&PY_TYPE(ZeisModel), &PY_TYPE_DEF(ZeisModel), module, "ZeisModel", 0);
            }

            void t_ZeisModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "class_", make_descriptor(ZeisModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "wrapfn_", make_descriptor(t_ZeisModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ZeisModel::initializeClass, 1)))
                return NULL;
              return t_ZeisModel::wrap_Object(ZeisModel(((t_ZeisModel *) arg)->object.this$));
            }
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ZeisModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds)
            {
              ZeisModel object((jobject) NULL);

              INT_CALL(object = ZeisModel());
              self->object = object;

              return 0;
            }

            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  jdouble result;

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeC2Z", args);
              return NULL;
            }

            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AggregatableStatistic::class$ = NULL;
        jmethodID *AggregatableStatistic::mids$ = NULL;
        bool AggregatableStatistic::live$ = false;

        jclass AggregatableStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AggregatableStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_e41887efdd059644] = env->getMethodID(cls, "aggregate", "([Ljava/lang/Object;)V");
            mids$[mid_aggregate_f63faef051c62dc2] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)V");
            mids$[mid_aggregate_009757f2c0fd9090] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Object;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AggregatableStatistic::aggregate(const JArray< ::java::lang::Object > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_e41887efdd059644], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_f63faef051c62dc2], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_009757f2c0fd9090], a0.this$);
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
      namespace descriptive {
        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data);
        static PyGetSetDef t_AggregatableStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AggregatableStatistic, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregatableStatistic__methods_[] = {
          DECLARE_METHOD(t_AggregatableStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, of_, METH_VARARGS),
          DECLARE_METHOD(t_AggregatableStatistic, aggregate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregatableStatistic)[] = {
          { Py_tp_methods, t_AggregatableStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AggregatableStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregatableStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AggregatableStatistic, t_AggregatableStatistic, AggregatableStatistic);
        PyObject *t_AggregatableStatistic::wrap_Object(const AggregatableStatistic& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AggregatableStatistic::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AggregatableStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregatableStatistic), &PY_TYPE_DEF(AggregatableStatistic), module, "AggregatableStatistic", 0);
        }

        void t_AggregatableStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "class_", make_descriptor(AggregatableStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "wrapfn_", make_descriptor(t_AggregatableStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregatableStatistic::initializeClass, 1)))
            return NULL;
          return t_AggregatableStatistic::wrap_Object(AggregatableStatistic(((t_AggregatableStatistic *) arg)->object.this$));
        }
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregatableStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::java::lang::Object > a0((jobject) NULL);

              if (!parseArgs(args, "[o", &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Object a0((jobject) NULL);

              if (!parseArgs(args, "O", self->parameters[0], &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", args);
          return NULL;
        }
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *PSquarePercentile::class$ = NULL;
          jmethodID *PSquarePercentile::mids$ = NULL;
          bool PSquarePercentile::live$ = false;

          jclass PSquarePercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/PSquarePercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_4b709ee17fb84299] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/PSquarePercentile;");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantile_557b8123390d8d0c] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_quantile_557b8123390d8d0c] = env->getMethodID(cls, "quantile", "()D");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PSquarePercentile::PSquarePercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          void PSquarePercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          PSquarePercentile PSquarePercentile::copy() const
          {
            return PSquarePercentile(env->callObjectMethod(this$, mids$[mid_copy_4b709ee17fb84299]));
          }

          jboolean PSquarePercentile::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jlong PSquarePercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble PSquarePercentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_557b8123390d8d0c]);
          }

          jdouble PSquarePercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          jint PSquarePercentile::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          void PSquarePercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
          }

          jdouble PSquarePercentile::quantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_quantile_557b8123390d8d0c]);
          }

          ::java::lang::String PSquarePercentile::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data);
          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data);
          static PyGetSetDef t_PSquarePercentile__fields_[] = {
            DECLARE_GET_FIELD(t_PSquarePercentile, n),
            DECLARE_GET_FIELD(t_PSquarePercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PSquarePercentile__methods_[] = {
            DECLARE_METHOD(t_PSquarePercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, equals, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, quantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PSquarePercentile)[] = {
            { Py_tp_methods, t_PSquarePercentile__methods_ },
            { Py_tp_init, (void *) t_PSquarePercentile_init_ },
            { Py_tp_getset, t_PSquarePercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PSquarePercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(PSquarePercentile, t_PSquarePercentile, PSquarePercentile);

          void t_PSquarePercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(PSquarePercentile), &PY_TYPE_DEF(PSquarePercentile), module, "PSquarePercentile", 0);
          }

          void t_PSquarePercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "class_", make_descriptor(PSquarePercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "wrapfn_", make_descriptor(t_PSquarePercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PSquarePercentile::initializeClass, 1)))
              return NULL;
            return t_PSquarePercentile::wrap_Object(PSquarePercentile(((t_PSquarePercentile *) arg)->object.this$));
          }
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PSquarePercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            PSquarePercentile object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = PSquarePercentile(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args)
          {
            PSquarePercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_PSquarePercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.quantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinates::mids$ = NULL;
      bool TimeStampedAngularCoordinates::live$ = false;

      jclass TimeStampedAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ddc6f315d1e488b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_d1b18387f266ab27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_ab40439ce57e4b27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_b580f4c150431d88] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_532e84b28850f6ea] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_revert_99d3c751073fda6d] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_shiftedBy_0ac736191f55005c] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_subtractOffset_532e84b28850f6ea] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ddc6f315d1e488b6, a0.this$, a1.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d1b18387f266ab27, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ab40439ce57e4b27, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b580f4c150431d88, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::addOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_532e84b28850f6ea], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate TimeStampedAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::revert() const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_99d3c751073fda6d]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_0ac736191f55005c], a0));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::subtractOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_532e84b28850f6ea], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self);
      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinates, t_TimeStampedAngularCoordinates, TimeStampedAngularCoordinates);

      void t_TimeStampedAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinates), &PY_TYPE_DEF(TimeStampedAngularCoordinates), module, "TimeStampedAngularCoordinates", 0);
      }

      void t_TimeStampedAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "class_", make_descriptor(TimeStampedAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinates::wrap_Object(TimeStampedAngularCoordinates(((t_TimeStampedAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/Antenna.h"
#include "java/util/List.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *Antenna::class$ = NULL;
        jmethodID *Antenna::mids$ = NULL;
        bool Antenna::live$ = false;

        jclass Antenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/Antenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccentricities_5b2557f30fe1c2d7] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/gnss/Frequency;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFrequencies_0d9551367f7ecdef] = env->getMethodID(cls, "getFrequencies", "()Ljava/util/List;");
            mids$[mid_getPattern_0e7ab14a9a932ae8] = env->getMethodID(cls, "getPattern", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/gnss/antenna/FrequencyPattern;");
            mids$[mid_getPhaseCenterVariation_cf1fadd58bcb6fde] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/orekit/gnss/Frequency;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getSinexCode_3cffd47377eca18a] = env->getMethodID(cls, "getSinexCode", "()Ljava/lang/String;");
            mids$[mid_getType_3cffd47377eca18a] = env->getMethodID(cls, "getType", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Antenna::getEccentricities(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_5b2557f30fe1c2d7], a0.this$));
        }

        ::java::util::List Antenna::getFrequencies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFrequencies_0d9551367f7ecdef]));
        }

        ::org::orekit::gnss::antenna::FrequencyPattern Antenna::getPattern(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::orekit::gnss::antenna::FrequencyPattern(env->callObjectMethod(this$, mids$[mid_getPattern_0e7ab14a9a932ae8], a0.this$));
        }

        jdouble Antenna::getPhaseCenterVariation(const ::org::orekit::gnss::Frequency & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_cf1fadd58bcb6fde], a0.this$, a1.this$);
        }

        ::java::lang::String Antenna::getSinexCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSinexCode_3cffd47377eca18a]));
        }

        ::java::lang::String Antenna::getType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getType_3cffd47377eca18a]));
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
      namespace antenna {
        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getFrequencies(t_Antenna *self);
        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args);
        static PyObject *t_Antenna_getSinexCode(t_Antenna *self);
        static PyObject *t_Antenna_getType(t_Antenna *self);
        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data);
        static PyGetSetDef t_Antenna__fields_[] = {
          DECLARE_GET_FIELD(t_Antenna, frequencies),
          DECLARE_GET_FIELD(t_Antenna, sinexCode),
          DECLARE_GET_FIELD(t_Antenna, type),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Antenna__methods_[] = {
          DECLARE_METHOD(t_Antenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, getEccentricities, METH_O),
          DECLARE_METHOD(t_Antenna, getFrequencies, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getPattern, METH_O),
          DECLARE_METHOD(t_Antenna, getPhaseCenterVariation, METH_VARARGS),
          DECLARE_METHOD(t_Antenna, getSinexCode, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Antenna)[] = {
          { Py_tp_methods, t_Antenna__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Antenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Antenna)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Antenna, t_Antenna, Antenna);

        void t_Antenna::install(PyObject *module)
        {
          installType(&PY_TYPE(Antenna), &PY_TYPE_DEF(Antenna), module, "Antenna", 0);
        }

        void t_Antenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "class_", make_descriptor(Antenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "wrapfn_", make_descriptor(t_Antenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Antenna::initializeClass, 1)))
            return NULL;
          return t_Antenna::wrap_Object(Antenna(((t_Antenna *) arg)->object.this$));
        }
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Antenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getFrequencies(t_Antenna *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(Frequency));
        }

        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::gnss::antenna::FrequencyPattern result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getPattern(a0));
            return ::org::orekit::gnss::antenna::t_FrequencyPattern::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPattern", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::Frequency::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", args);
          return NULL;
        }

        static PyObject *t_Antenna_getSinexCode(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSinexCode());
          return j2p(result);
        }

        static PyObject *t_Antenna_getType(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return j2p(result);
        }

        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSinexCode());
          return j2p(value);
        }

        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MassDepletionDelay::class$ = NULL;
          jmethodID *MassDepletionDelay::mids$ = NULL;
          bool MassDepletionDelay::live$ = false;
          ::java::lang::String *MassDepletionDelay::PREFIX$ = NULL;

          jclass MassDepletionDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MassDepletionDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d12f1efaaf614d8b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;)V");
              mids$[mid_combinedDerivatives_5fc55a092d474e7c] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREFIX$ = new ::java::lang::String(env->getStaticObjectField(cls, "PREFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MassDepletionDelay::MassDepletionDelay(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::forces::maneuvers::Maneuver & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d12f1efaaf614d8b, a0.this$, a1, a2.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives MassDepletionDelay::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_5fc55a092d474e7c], a0.this$));
          }

          jint MassDepletionDelay::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          ::java::lang::String MassDepletionDelay::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          void MassDepletionDelay::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        namespace jacobians {
          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg);
          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args);
          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data);
          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data);
          static PyGetSetDef t_MassDepletionDelay__fields_[] = {
            DECLARE_GET_FIELD(t_MassDepletionDelay, dimension),
            DECLARE_GET_FIELD(t_MassDepletionDelay, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MassDepletionDelay__methods_[] = {
            DECLARE_METHOD(t_MassDepletionDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_MassDepletionDelay, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, getName, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MassDepletionDelay)[] = {
            { Py_tp_methods, t_MassDepletionDelay__methods_ },
            { Py_tp_init, (void *) t_MassDepletionDelay_init_ },
            { Py_tp_getset, t_MassDepletionDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MassDepletionDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MassDepletionDelay, t_MassDepletionDelay, MassDepletionDelay);

          void t_MassDepletionDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(MassDepletionDelay), &PY_TYPE_DEF(MassDepletionDelay), module, "MassDepletionDelay", 0);
          }

          void t_MassDepletionDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "class_", make_descriptor(MassDepletionDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "wrapfn_", make_descriptor(t_MassDepletionDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "boxfn_", make_descriptor(boxObject));
            env->getClass(MassDepletionDelay::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "PREFIX", make_descriptor(j2p(*MassDepletionDelay::PREFIX$)));
          }

          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MassDepletionDelay::initializeClass, 1)))
              return NULL;
            return t_MassDepletionDelay::wrap_Object(MassDepletionDelay(((t_MassDepletionDelay *) arg)->object.this$));
          }
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MassDepletionDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::forces::maneuvers::Maneuver a2((jobject) NULL);
            MassDepletionDelay object((jobject) NULL);

            if (!parseArgs(args, "sZk", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MassDepletionDelay(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AltCovarianceType::class$ = NULL;
            jmethodID *AltCovarianceType::mids$ = NULL;
            bool AltCovarianceType::live$ = false;
            AltCovarianceType *AltCovarianceType::CSIG3EIGVEC3 = NULL;
            AltCovarianceType *AltCovarianceType::XYZ = NULL;

            jclass AltCovarianceType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AltCovarianceType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_f69492cb520c47d8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_values_ae35e7d8940d4090] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CSIG3EIGVEC3 = new AltCovarianceType(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                XYZ = new AltCovarianceType(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AltCovarianceType AltCovarianceType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AltCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f69492cb520c47d8], a0.this$));
            }

            JArray< AltCovarianceType > AltCovarianceType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AltCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_ae35e7d8940d4090]));
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
          namespace cdm {
            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args);
            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AltCovarianceType_values(PyTypeObject *type);
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data);
            static PyGetSetDef t_AltCovarianceType__fields_[] = {
              DECLARE_GET_FIELD(t_AltCovarianceType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AltCovarianceType__methods_[] = {
              DECLARE_METHOD(t_AltCovarianceType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AltCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AltCovarianceType)[] = {
              { Py_tp_methods, t_AltCovarianceType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AltCovarianceType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AltCovarianceType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AltCovarianceType, t_AltCovarianceType, AltCovarianceType);
            PyObject *t_AltCovarianceType::wrap_Object(const AltCovarianceType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AltCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AltCovarianceType::install(PyObject *module)
            {
              installType(&PY_TYPE(AltCovarianceType), &PY_TYPE_DEF(AltCovarianceType), module, "AltCovarianceType", 0);
            }

            void t_AltCovarianceType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "class_", make_descriptor(AltCovarianceType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "wrapfn_", make_descriptor(t_AltCovarianceType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AltCovarianceType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "CSIG3EIGVEC3", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::CSIG3EIGVEC3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "XYZ", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::XYZ)));
            }

            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AltCovarianceType::initializeClass, 1)))
                return NULL;
              return t_AltCovarianceType::wrap_Object(AltCovarianceType(((t_AltCovarianceType *) arg)->object.this$));
            }
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AltCovarianceType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AltCovarianceType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::valueOf(a0));
                return t_AltCovarianceType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AltCovarianceType_values(PyTypeObject *type)
            {
              JArray< AltCovarianceType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::values());
              return JArray<jobject>(result.this$).wrap(t_AltCovarianceType::wrap_jobject);
            }
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$OccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$OccultationAngles::mids$ = NULL;
      bool OccultationEngine$OccultationAngles::live$ = false;

      jclass OccultationEngine$OccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$OccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_557b8123390d8d0c] = env->getMethodID(cls, "getLimbRadius", "()D");
          mids$[mid_getOccultedApparentRadius_557b8123390d8d0c] = env->getMethodID(cls, "getOccultedApparentRadius", "()D");
          mids$[mid_getSeparation_557b8123390d8d0c] = env->getMethodID(cls, "getSeparation", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble OccultationEngine$OccultationAngles::getLimbRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLimbRadius_557b8123390d8d0c]);
      }

      jdouble OccultationEngine$OccultationAngles::getOccultedApparentRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedApparentRadius_557b8123390d8d0c]);
      }

      jdouble OccultationEngine$OccultationAngles::getSeparation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSeparation_557b8123390d8d0c]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$OccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, separation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$OccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$OccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$OccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$OccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$OccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$OccultationAngles, t_OccultationEngine$OccultationAngles, OccultationEngine$OccultationAngles);

      void t_OccultationEngine$OccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$OccultationAngles), &PY_TYPE_DEF(OccultationEngine$OccultationAngles), module, "OccultationEngine$OccultationAngles", 0);
      }

      void t_OccultationEngine$OccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "class_", make_descriptor(OccultationEngine$OccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$OccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$OccultationAngles::wrap_Object(OccultationEngine$OccultationAngles(((t_OccultationEngine$OccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSeparation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSeparation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeSystem::class$ = NULL;
          jmethodID *TimeSystem::mids$ = NULL;
          bool TimeSystem::live$ = false;
          TimeSystem *TimeSystem::GMST = NULL;
          TimeSystem *TimeSystem::GPS = NULL;
          TimeSystem *TimeSystem::MET = NULL;
          TimeSystem *TimeSystem::MRT = NULL;
          TimeSystem *TimeSystem::SCLK = NULL;
          TimeSystem *TimeSystem::TAI = NULL;
          TimeSystem *TimeSystem::TCB = NULL;
          TimeSystem *TimeSystem::TCG = NULL;
          TimeSystem *TimeSystem::TDB = NULL;
          TimeSystem *TimeSystem::TT = NULL;
          TimeSystem *TimeSystem::UT1 = NULL;
          TimeSystem *TimeSystem::UTC = NULL;

          jclass TimeSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConverter_3e4357fb6d159cb2] = env->getMethodID(cls, "getConverter", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)Lorg/orekit/files/ccsds/definitions/TimeConverter;");
              mids$[mid_parse_33d2ec705c4e43f1] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_valueOf_33d2ec705c4e43f1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_values_30b6d18ee57e2905] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/TimeSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GMST = new TimeSystem(env->getStaticObjectField(cls, "GMST", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MET = new TimeSystem(env->getStaticObjectField(cls, "MET", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              MRT = new TimeSystem(env->getStaticObjectField(cls, "MRT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              SCLK = new TimeSystem(env->getStaticObjectField(cls, "SCLK", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCB = new TimeSystem(env->getStaticObjectField(cls, "TCB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TCG = new TimeSystem(env->getStaticObjectField(cls, "TCG", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TDB = new TimeSystem(env->getStaticObjectField(cls, "TDB", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              TT = new TimeSystem(env->getStaticObjectField(cls, "TT", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UT1 = new TimeSystem(env->getStaticObjectField(cls, "UT1", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/files/ccsds/definitions/TimeSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeConverter TimeSystem::getConverter(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
          {
            return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getConverter_3e4357fb6d159cb2], a0.this$));
          }

          TimeSystem TimeSystem::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_33d2ec705c4e43f1], a0.this$));
          }

          TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_33d2ec705c4e43f1], a0.this$));
          }

          JArray< TimeSystem > TimeSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_30b6d18ee57e2905]));
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
        namespace definitions {
          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg);
          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_TimeSystem_values(PyTypeObject *type);
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
          static PyGetSetDef t_TimeSystem__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystem__methods_[] = {
            DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_TimeSystem, getConverter, METH_O),
            DECLARE_METHOD(t_TimeSystem, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
            { Py_tp_methods, t_TimeSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TimeSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
          PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TimeSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TimeSystem *self = (t_TimeSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TimeSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
          }

          void t_TimeSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMST", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MET", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "MRT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::MRT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SCLK", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SCLK)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TCG", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TCG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TDB", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TDB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UT1", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UT1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
          }

          static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
              return NULL;
            return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
          }
          static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_TimeSystem_getConverter(t_TimeSystem *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getConverter(a0));
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConverter", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::parse(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            TimeSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::valueOf(a0));
              return t_TimeSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_TimeSystem_values(PyTypeObject *type)
          {
            JArray< TimeSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::TimeSystem::values());
            return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
          }
          static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
