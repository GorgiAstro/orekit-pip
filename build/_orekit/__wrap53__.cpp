#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericMappingFunction::class$ = NULL;
          jmethodID *IonosphericMappingFunction::mids$ = NULL;
          bool IonosphericMappingFunction::live$ = false;

          jclass IonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactor_0ba5fed9597b693e] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_d3398190482814dc] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble IonosphericMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement IonosphericMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_d3398190482814dc], a0.this$));
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
          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args);

          static PyMethodDef t_IonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_IonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericMappingFunction)[] = {
            { Py_tp_methods, t_IonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IonosphericMappingFunction, t_IonosphericMappingFunction, IonosphericMappingFunction);

          void t_IonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericMappingFunction), &PY_TYPE_DEF(IonosphericMappingFunction), module, "IonosphericMappingFunction", 0);
          }

          void t_IonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "class_", make_descriptor(IonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "wrapfn_", make_descriptor(t_IonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_IonosphericMappingFunction::wrap_Object(IonosphericMappingFunction(((t_IonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_IonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericMappingFunction_mappingFactor(t_IonosphericMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/HermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *HermiteRuleFactory::class$ = NULL;
          jmethodID *HermiteRuleFactory::mids$ = NULL;
          bool HermiteRuleFactory::live$ = false;

          jclass HermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/HermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HermiteRuleFactory::HermiteRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_HermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_HermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HermiteRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HermiteRuleFactory)[] = {
            { Py_tp_methods, t_HermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_HermiteRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(HermiteRuleFactory, t_HermiteRuleFactory, HermiteRuleFactory);

          void t_HermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(HermiteRuleFactory), &PY_TYPE_DEF(HermiteRuleFactory), module, "HermiteRuleFactory", 0);
          }

          void t_HermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "class_", make_descriptor(HermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "wrapfn_", make_descriptor(t_HermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_HermiteRuleFactory::wrap_Object(HermiteRuleFactory(((t_HermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            HermiteRuleFactory object((jobject) NULL);

            INT_CALL(object = HermiteRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Point::class$ = NULL;
      jmethodID *Point::mids$ = NULL;
      bool Point::live$ = false;

      jclass Point::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Point");

          mids$ = new jmethodID[max_mid];
          mids$[mid_distance_726dc963fac3505e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
          mids$[mid_getSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Point::distance(const Point & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance_726dc963fac3505e], a0.this$);
      }

      ::org::hipparchus::geometry::Space Point::getSpace() const
      {
        return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_0438ef5f9a5edb53]));
      }

      jboolean Point::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
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
      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_of_(t_Point *self, PyObject *args);
      static PyObject *t_Point_distance(t_Point *self, PyObject *arg);
      static PyObject *t_Point_getSpace(t_Point *self);
      static PyObject *t_Point_isNaN(t_Point *self);
      static PyObject *t_Point_get__naN(t_Point *self, void *data);
      static PyObject *t_Point_get__space(t_Point *self, void *data);
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data);
      static PyGetSetDef t_Point__fields_[] = {
        DECLARE_GET_FIELD(t_Point, naN),
        DECLARE_GET_FIELD(t_Point, space),
        DECLARE_GET_FIELD(t_Point, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Point__methods_[] = {
        DECLARE_METHOD(t_Point, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, of_, METH_VARARGS),
        DECLARE_METHOD(t_Point, distance, METH_O),
        DECLARE_METHOD(t_Point, getSpace, METH_NOARGS),
        DECLARE_METHOD(t_Point, isNaN, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Point)[] = {
        { Py_tp_methods, t_Point__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Point__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Point)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Point, t_Point, Point);
      PyObject *t_Point::wrap_Object(const Point& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Point::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Point::install(PyObject *module)
      {
        installType(&PY_TYPE(Point), &PY_TYPE_DEF(Point), module, "Point", 0);
      }

      void t_Point::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "class_", make_descriptor(Point::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "wrapfn_", make_descriptor(t_Point::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Point::initializeClass, 1)))
          return NULL;
        return t_Point::wrap_Object(Point(((t_Point *) arg)->object.this$));
      }
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Point::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Point_of_(t_Point *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Point_distance(t_Point *self, PyObject *arg)
      {
        Point a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Point::initializeClass, &a0, &p0, t_Point::parameters_))
        {
          OBJ_CALL(result = self->object.distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance", arg);
        return NULL;
      }

      static PyObject *t_Point_getSpace(t_Point *self)
      {
        ::org::hipparchus::geometry::Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
      }

      static PyObject *t_Point_isNaN(t_Point *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Point_get__naN(t_Point *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Point_get__space(t_Point *self, void *data)
      {
        ::org::hipparchus::geometry::Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEStateAndDerivative::class$ = NULL;
      jmethodID *ODEStateAndDerivative::mids$ = NULL;
      bool ODEStateAndDerivative::live$ = false;

      jclass ODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_55ff226e96afe8b2] = env->getMethodID(cls, "<init>", "(D[D[D)V");
          mids$[mid_init$_999985d29bddc69e] = env->getMethodID(cls, "<init>", "(D[D[D[[D[[D)V");
          mids$[mid_getCompleteDerivative_7cdc325af0834901] = env->getMethodID(cls, "getCompleteDerivative", "()[D");
          mids$[mid_getPrimaryDerivative_7cdc325af0834901] = env->getMethodID(cls, "getPrimaryDerivative", "()[D");
          mids$[mid_getSecondaryDerivative_eb9cceadce1b2217] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_55ff226e96afe8b2, a0, a1.this$, a2.this$)) {}

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_999985d29bddc69e, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< jdouble > ODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_7cdc325af0834901]));
      }

      JArray< jdouble > ODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_7cdc325af0834901]));
      }

      JArray< jdouble > ODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_eb9cceadce1b2217], a0));
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
      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ODEState),
        NULL
      };

      DEFINE_TYPE(ODEStateAndDerivative, t_ODEStateAndDerivative, ODEStateAndDerivative);

      void t_ODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEStateAndDerivative), &PY_TYPE_DEF(ODEStateAndDerivative), module, "ODEStateAndDerivative", 0);
      }

      void t_ODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "class_", make_descriptor(ODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "wrapfn_", make_descriptor(t_ODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ODEStateAndDerivative::wrap_Object(ODEStateAndDerivative(((t_ODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D[[D[[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return value.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/Selector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *Selector::class$ = NULL;
        jmethodID *Selector::mids$ = NULL;
        bool Selector::live$ = false;

        jclass Selector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/Selector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_select_824133ce4aec3505] = env->getMethodID(cls, "select", "(DD)D");
            mids$[mid_selectFirst_a836bdf37f582c99] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Selector::Selector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Selector::select(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_select_824133ce4aec3505], a0, a1);
        }

        jboolean Selector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_a836bdf37f582c99], a0, a1);
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
      namespace utils {
        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Selector_select(t_Selector *self, PyObject *args);
        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args);

        static PyMethodDef t_Selector__methods_[] = {
          DECLARE_METHOD(t_Selector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, select, METH_VARARGS),
          DECLARE_METHOD(t_Selector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Selector)[] = {
          { Py_tp_methods, t_Selector__methods_ },
          { Py_tp_init, (void *) t_Selector_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Selector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Selector, t_Selector, Selector);

        void t_Selector::install(PyObject *module)
        {
          installType(&PY_TYPE(Selector), &PY_TYPE_DEF(Selector), module, "Selector", 0);
        }

        void t_Selector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "class_", make_descriptor(Selector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "wrapfn_", make_descriptor(t_Selector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Selector::initializeClass, 1)))
            return NULL;
          return t_Selector::wrap_Object(Selector(((t_Selector *) arg)->object.this$));
        }
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Selector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds)
        {
          Selector object((jobject) NULL);

          INT_CALL(object = Selector());
          self->object = object;

          return 0;
        }

        static PyObject *t_Selector_select(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.select(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "select", args);
          return NULL;
        }

        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFirst", args);
          return NULL;
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
          mids$[mid_getLimbRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getLimbRadius", "()D");
          mids$[mid_getOccultedApparentRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getOccultedApparentRadius", "()D");
          mids$[mid_getSeparation_456d9a2f64d6b28d] = env->getMethodID(cls, "getSeparation", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble OccultationEngine$OccultationAngles::getLimbRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLimbRadius_456d9a2f64d6b28d]);
      }

      jdouble OccultationEngine$OccultationAngles::getOccultedApparentRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedApparentRadius_456d9a2f64d6b28d]);
      }

      jdouble OccultationEngine$OccultationAngles::getSeparation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSeparation_456d9a2f64d6b28d]);
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
#include "org/hipparchus/optim/ConvergenceCheckerAndMultiplexer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerAndMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerAndMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerAndMultiplexer::live$ = false;

      jclass ConvergenceCheckerAndMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerAndMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_530133671081dc04] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerAndMultiplexer::ConvergenceCheckerAndMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

      jboolean ConvergenceCheckerAndMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_530133671081dc04], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerAndMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerAndMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerAndMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerAndMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerAndMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerAndMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerAndMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerAndMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerAndMultiplexer, t_ConvergenceCheckerAndMultiplexer, ConvergenceCheckerAndMultiplexer);
      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_Object(const ConvergenceCheckerAndMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerAndMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerAndMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerAndMultiplexer), module, "ConvergenceCheckerAndMultiplexer", 0);
      }

      void t_ConvergenceCheckerAndMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "class_", make_descriptor(ConvergenceCheckerAndMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerAndMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerAndMultiplexer::wrap_Object(ConvergenceCheckerAndMultiplexer(((t_ConvergenceCheckerAndMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerAndMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerAndMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractGenerator::class$ = NULL;
            jmethodID *AbstractGenerator::mids$ = NULL;
            bool AbstractGenerator::live$ = false;

            jclass AbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a89f5039559ee5f9] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_e9166ff038580198] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_e9166ff038580198] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_5f1e8067dcf848fb] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_085bbc49599fa163] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_enterSection_e939c6558ae8d313] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_0090f7797e403f43] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getOutputName_0090f7797e403f43] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_7ae3461a92a43152] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_43625fc1c3d86afe] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_unitsListToString_7df61b71f083fbd6] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeEntry_c0315b1049063d00] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_8ef0818590b472f3] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_0a2534765e753ec9] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_a1392c2233da957d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_fd7b1fd8e935b456] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_b458f0406720c03f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_20cfd7e2288cf462] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_be0046d7f7239695] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_d77f10dac029c69d] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");
                mids$[mid_writeUnits_f6642efa67a69233] = env->getMethodID(cls, "writeUnits", "(Lorg/orekit/utils/units/Unit;)Z");
                mids$[mid_complain_d1dd1bdcf55f8f80] = env->getMethodID(cls, "complain", "(Ljava/lang/String;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractGenerator::AbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a89f5039559ee5f9, a0.this$, a1.this$, a2, a3)) {}

            void AbstractGenerator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
            }

            ::java::lang::String AbstractGenerator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_e9166ff038580198], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_e9166ff038580198], a0.this$, a1.this$));
            }

            ::java::lang::String AbstractGenerator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_5f1e8067dcf848fb], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String AbstractGenerator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_085bbc49599fa163], a0));
            }

            void AbstractGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_e939c6558ae8d313], a0.this$);
            }

            ::java::lang::String AbstractGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_0090f7797e403f43]));
            }

            ::java::lang::String AbstractGenerator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_0090f7797e403f43]));
            }

            void AbstractGenerator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_7ae3461a92a43152]);
            }

            ::java::lang::String AbstractGenerator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_43625fc1c3d86afe], a0.this$));
            }

            ::java::lang::String AbstractGenerator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_7df61b71f083fbd6], a0.this$));
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_c0315b1049063d00], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_8ef0818590b472f3], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_0a2534765e753ec9], a0.this$, a1, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a1392c2233da957d], a0.this$, a1.this$, a2);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_fd7b1fd8e935b456], a0.this$, a1.this$, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_b458f0406720c03f], a0.this$, a1, a2.this$, a3);
            }

            void AbstractGenerator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_20cfd7e2288cf462], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void AbstractGenerator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_be0046d7f7239695], a0);
            }

            void AbstractGenerator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_d77f10dac029c69d], a0.this$);
            }

            jboolean AbstractGenerator::writeUnits(const ::org::orekit::utils::units::Unit & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_writeUnits_f6642efa67a69233], a0.this$);
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
          namespace generation {
            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self);
            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args);
            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg);
            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data);
            static PyGetSetDef t_AbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGenerator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_AbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGenerator, close, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, doubleToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, enterSection, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGenerator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, unitsListToString, METH_O),
              DECLARE_METHOD(t_AbstractGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeRawData, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGenerator, writeUnits, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGenerator)[] = {
              { Py_tp_methods, t_AbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_AbstractGenerator_init_ },
              { Py_tp_getset, t_AbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGenerator, t_AbstractGenerator, AbstractGenerator);

            void t_AbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGenerator), &PY_TYPE_DEF(AbstractGenerator), module, "AbstractGenerator", 0);
            }

            void t_AbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "class_", make_descriptor(AbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "wrapfn_", make_descriptor(t_AbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_AbstractGenerator::wrap_Object(AbstractGenerator(((t_AbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_AbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractGenerator_init_(t_AbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              AbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractGenerator(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractGenerator_close(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.close());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_dateToCalendarString(t_AbstractGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_dateToString(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_doubleToString(t_AbstractGenerator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_enterSection(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_exitSection(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_getOutputName(t_AbstractGenerator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_AbstractGenerator_newLine(t_AbstractGenerator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_AbstractGenerator_siToCcsdsName(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_unitsListToString(t_AbstractGenerator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeEntry(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeRawData(t_AbstractGenerator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_writeUnits(t_AbstractGenerator *self, PyObject *arg)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.writeUnits(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "writeUnits", arg);
              return NULL;
            }

            static PyObject *t_AbstractGenerator_get__outputName(t_AbstractGenerator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbSatellite::class$ = NULL;
        jmethodID *DcbSatellite::mids$ = NULL;
        bool DcbSatellite::live$ = false;

        jclass DcbSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_getDcbData_f4624ca195af8468] = env->getMethodID(cls, "getDcbData", "()Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_d11de623496594e3] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getPRN_0090f7797e403f43] = env->getMethodID(cls, "getPRN", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSytem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSytem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_setDescription_8b883f3a6778fd13] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbSatellite::DcbSatellite(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

        ::org::orekit::files::sinex::Dcb DcbSatellite::getDcbData() const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_f4624ca195af8468]));
        }

        ::org::orekit::files::sinex::DcbDescription DcbSatellite::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_d11de623496594e3]));
        }

        ::java::lang::String DcbSatellite::getPRN() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPRN_0090f7797e403f43]));
        }

        ::org::orekit::gnss::SatelliteSystem DcbSatellite::getSatelliteSytem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSytem_1b72fcc8f550bfc7]));
        }

        void DcbSatellite::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_8b883f3a6778fd13], a0.this$);
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
        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg);
        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data);
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data);
        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data);
        static PyGetSetDef t_DcbSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_DcbSatellite, dcbData),
          DECLARE_GETSET_FIELD(t_DcbSatellite, description),
          DECLARE_GET_FIELD(t_DcbSatellite, pRN),
          DECLARE_GET_FIELD(t_DcbSatellite, satelliteSytem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbSatellite__methods_[] = {
          DECLARE_METHOD(t_DcbSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, getDcbData, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getPRN, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getSatelliteSytem, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbSatellite)[] = {
          { Py_tp_methods, t_DcbSatellite__methods_ },
          { Py_tp_init, (void *) t_DcbSatellite_init_ },
          { Py_tp_getset, t_DcbSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbSatellite, t_DcbSatellite, DcbSatellite);

        void t_DcbSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbSatellite), &PY_TYPE_DEF(DcbSatellite), module, "DcbSatellite", 0);
        }

        void t_DcbSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "class_", make_descriptor(DcbSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "wrapfn_", make_descriptor(t_DcbSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbSatellite::initializeClass, 1)))
            return NULL;
          return t_DcbSatellite::wrap_Object(DcbSatellite(((t_DcbSatellite *) arg)->object.this$));
        }
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbSatellite object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);
          OBJ_CALL(result = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPRN());
          return j2p(result);
        }

        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg)
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

        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::Dcb value((jobject) NULL);
          OBJ_CALL(value = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(value);
        }

        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data)
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

        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPRN());
          return j2p(value);
        }

        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataType::class$ = NULL;
          jmethodID *RinexClock$ClockDataType::mids$ = NULL;
          bool RinexClock$ClockDataType::live$ = false;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AS = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::CR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::DR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::MS = NULL;

          jclass RinexClock$ClockDataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
              mids$[mid_parseClockDataType_96d882edfd06a5a7] = env->getStaticMethodID(cls, "parseClockDataType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_valueOf_96d882edfd06a5a7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_values_1c25decec23f013f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              AS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              CR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "CR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              DR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "DR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              MS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "MS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexClock$ClockDataType::getKey() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::parseClockDataType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_parseClockDataType_96d882edfd06a5a7], a0.this$));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_96d882edfd06a5a7], a0.this$));
          }

          JArray< RinexClock$ClockDataType > RinexClock$ClockDataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexClock$ClockDataType >(env->callStaticObjectMethod(cls, mids$[mid_values_1c25decec23f013f]));
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
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self);
          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type);
          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data);
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, key),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataType__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, getKey, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, parseClockDataType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataType)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock$ClockDataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataType, t_RinexClock$ClockDataType, RinexClock$ClockDataType);
          PyObject *t_RinexClock$ClockDataType::wrap_Object(const RinexClock$ClockDataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexClock$ClockDataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexClock$ClockDataType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataType), &PY_TYPE_DEF(RinexClock$ClockDataType), module, "RinexClock$ClockDataType", 0);
          }

          void t_RinexClock$ClockDataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "class_", make_descriptor(RinexClock$ClockDataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "wrapfn_", make_descriptor(t_RinexClock$ClockDataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexClock$ClockDataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "CR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::CR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "DR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::DR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "MS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::MS)));
          }

          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataType::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataType::wrap_Object(RinexClock$ClockDataType(((t_RinexClock$ClockDataType *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getKey());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::parseClockDataType(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::valueOf(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type)
          {
            JArray< RinexClock$ClockDataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexClock$ClockDataType::wrap_jobject);
          }
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getKey());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultRealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixChangingVisitor::mids$ = NULL;
      bool DefaultRealMatrixChangingVisitor::live$ = false;

      jclass DefaultRealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_456d9a2f64d6b28d] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_4f773f7fb5410128] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixChangingVisitor::DefaultRealMatrixChangingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      jdouble DefaultRealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_456d9a2f64d6b28d]);
      }

      void DefaultRealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      jdouble DefaultRealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_4f773f7fb5410128], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self);
      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixChangingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixChangingVisitor, t_DefaultRealMatrixChangingVisitor, DefaultRealMatrixChangingVisitor);

      void t_DefaultRealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixChangingVisitor), &PY_TYPE_DEF(DefaultRealMatrixChangingVisitor), module, "DefaultRealMatrixChangingVisitor", 0);
      }

      void t_DefaultRealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "class_", make_descriptor(DefaultRealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixChangingVisitor::wrap_Object(DefaultRealMatrixChangingVisitor(((t_DefaultRealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixChangingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixChangingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimplePointChecker.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimplePointChecker::class$ = NULL;
      jmethodID *SimplePointChecker::mids$ = NULL;
      bool SimplePointChecker::live$ = false;

      jclass SimplePointChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimplePointChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_e0000eac6dce0ad8] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/util/Pair;Lorg/hipparchus/util/Pair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

      jboolean SimplePointChecker::converged(jint a0, const ::org::hipparchus::util::Pair & a1, const ::org::hipparchus::util::Pair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_e0000eac6dce0ad8], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args);
      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args);
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data);
      static PyGetSetDef t_SimplePointChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimplePointChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimplePointChecker__methods_[] = {
        DECLARE_METHOD(t_SimplePointChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimplePointChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimplePointChecker)[] = {
        { Py_tp_methods, t_SimplePointChecker__methods_ },
        { Py_tp_init, (void *) t_SimplePointChecker_init_ },
        { Py_tp_getset, t_SimplePointChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimplePointChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimplePointChecker, t_SimplePointChecker, SimplePointChecker);
      PyObject *t_SimplePointChecker::wrap_Object(const SimplePointChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimplePointChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimplePointChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimplePointChecker), &PY_TYPE_DEF(SimplePointChecker), module, "SimplePointChecker", 0);
      }

      void t_SimplePointChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "class_", make_descriptor(SimplePointChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "wrapfn_", make_descriptor(t_SimplePointChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimplePointChecker::initializeClass, 1)))
          return NULL;
        return t_SimplePointChecker::wrap_Object(SimplePointChecker(((t_SimplePointChecker *) arg)->object.this$));
      }
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimplePointChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimplePointChecker(a0, a1));
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
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimplePointChecker(a0, a1, a2));
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

      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::util::Pair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::util::Pair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::util::Pair::initializeClass, ::org::hipparchus::util::Pair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_Pair::parameters_, &a2, &p2, ::org::hipparchus::util::t_Pair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimplePointChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringConsumer::class$ = NULL;
            jmethodID *ParseToken$StringConsumer::mids$ = NULL;
            bool ParseToken$StringConsumer::live$ = false;

            jclass ParseToken$StringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_e939c6558ae8d313] = env->getMethodID(cls, "accept", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringConsumer::accept(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_e939c6558ae8d313], a0.this$);
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
            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringConsumer, t_ParseToken$StringConsumer, ParseToken$StringConsumer);

            void t_ParseToken$StringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringConsumer), &PY_TYPE_DEF(ParseToken$StringConsumer), module, "ParseToken$StringConsumer", 0);
            }

            void t_ParseToken$StringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "class_", make_descriptor(ParseToken$StringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringConsumer::wrap_Object(ParseToken$StringConsumer(((t_ParseToken$StringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
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
#include "org/orekit/estimation/measurements/generation/AngularAzElBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularAzElBuilder::class$ = NULL;
          jmethodID *AngularAzElBuilder::mids$ = NULL;
          bool AngularAzElBuilder::live$ = false;

          jclass AngularAzElBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularAzElBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b645aa450891a294] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_810d1032ddc90bec] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularAzEl;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularAzElBuilder::AngularAzElBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_b645aa450891a294, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::estimation::measurements::AngularAzEl AngularAzElBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularAzEl(env->callObjectMethod(this$, mids$[mid_build_810d1032ddc90bec], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args);
          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args);
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data);
          static PyGetSetDef t_AngularAzElBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularAzElBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularAzElBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularAzElBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularAzElBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularAzElBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularAzElBuilder)[] = {
            { Py_tp_methods, t_AngularAzElBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularAzElBuilder_init_ },
            { Py_tp_getset, t_AngularAzElBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularAzElBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularAzElBuilder, t_AngularAzElBuilder, AngularAzElBuilder);
          PyObject *t_AngularAzElBuilder::wrap_Object(const AngularAzElBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularAzElBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularAzElBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularAzElBuilder *self = (t_AngularAzElBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularAzElBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularAzElBuilder), &PY_TYPE_DEF(AngularAzElBuilder), module, "AngularAzElBuilder", 0);
          }

          void t_AngularAzElBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "class_", make_descriptor(AngularAzElBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "wrapfn_", make_descriptor(t_AngularAzElBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzElBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularAzElBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularAzElBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularAzElBuilder::wrap_Object(AngularAzElBuilder(((t_AngularAzElBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularAzElBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularAzElBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularAzElBuilder_of_(t_AngularAzElBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularAzElBuilder_init_(t_AngularAzElBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            AngularAzElBuilder object((jobject) NULL);

            if (!parseArgs(args, "kk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularAzElBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularAzElBuilder_build(t_AngularAzElBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularAzEl result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularAzEl::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularAzElBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularAzElBuilder_get__parameters_(t_AngularAzElBuilder *self, void *data)
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
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedDCBS::class$ = NULL;
        jmethodID *AppliedDCBS::mids$ = NULL;
        bool AppliedDCBS::live$ = false;

        jclass AppliedDCBS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedDCBS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6714f1ed69431720] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgDCBS_0090f7797e403f43] = env->getMethodID(cls, "getProgDCBS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourceDCBS_0090f7797e403f43] = env->getMethodID(cls, "getSourceDCBS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedDCBS::AppliedDCBS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6714f1ed69431720, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedDCBS::getProgDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgDCBS_0090f7797e403f43]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedDCBS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
        }

        ::java::lang::String AppliedDCBS::getSourceDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceDCBS_0090f7797e403f43]));
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
      namespace rinex {
        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data);
        static PyGetSetDef t_AppliedDCBS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedDCBS, progDCBS),
          DECLARE_GET_FIELD(t_AppliedDCBS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedDCBS, sourceDCBS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedDCBS__methods_[] = {
          DECLARE_METHOD(t_AppliedDCBS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, getProgDCBS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSourceDCBS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedDCBS)[] = {
          { Py_tp_methods, t_AppliedDCBS__methods_ },
          { Py_tp_init, (void *) t_AppliedDCBS_init_ },
          { Py_tp_getset, t_AppliedDCBS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedDCBS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedDCBS, t_AppliedDCBS, AppliedDCBS);

        void t_AppliedDCBS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedDCBS), &PY_TYPE_DEF(AppliedDCBS), module, "AppliedDCBS", 0);
        }

        void t_AppliedDCBS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "class_", make_descriptor(AppliedDCBS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "wrapfn_", make_descriptor(t_AppliedDCBS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedDCBS::initializeClass, 1)))
            return NULL;
          return t_AppliedDCBS::wrap_Object(AppliedDCBS(((t_AppliedDCBS *) arg)->object.this$));
        }
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedDCBS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedDCBS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedDCBS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgDCBS());
          return j2p(value);
        }

        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceDCBS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$FieldOccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$FieldOccultationAngles::mids$ = NULL;
      bool OccultationEngine$FieldOccultationAngles::live$ = false;

      jclass OccultationEngine$FieldOccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$FieldOccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_e6d4d3215c30992a] = env->getMethodID(cls, "getLimbRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOccultedApparentRadius_e6d4d3215c30992a] = env->getMethodID(cls, "getOccultedApparentRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSeparation_e6d4d3215c30992a] = env->getMethodID(cls, "getSeparation", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getLimbRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLimbRadius_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getOccultedApparentRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOccultedApparentRadius_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getSeparation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSeparation_e6d4d3215c30992a]));
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
      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$FieldOccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, separation),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$FieldOccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, of_, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$FieldOccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$FieldOccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$FieldOccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$FieldOccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$FieldOccultationAngles, t_OccultationEngine$FieldOccultationAngles, OccultationEngine$FieldOccultationAngles);
      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_Object(const OccultationEngine$FieldOccultationAngles& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OccultationEngine$FieldOccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$FieldOccultationAngles), &PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles), module, "OccultationEngine$FieldOccultationAngles", 0);
      }

      void t_OccultationEngine$FieldOccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "class_", make_descriptor(OccultationEngine$FieldOccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$FieldOccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$FieldOccultationAngles::wrap_Object(OccultationEngine$FieldOccultationAngles(((t_OccultationEngine$FieldOccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLimbRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLimbRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader$Parser::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader$Parser::mids$ = NULL;
      bool AGILeapSecondFilesLoader$Parser::live$ = false;

      jclass AGILeapSecondFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_90de289641581563] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader$Parser::AGILeapSecondFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::java::util::List AGILeapSecondFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_90de289641581563], a0.this$, a1.this$));
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
      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_AGILeapSecondFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader$Parser)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader$Parser, t_AGILeapSecondFilesLoader$Parser, AGILeapSecondFilesLoader$Parser);

      void t_AGILeapSecondFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader$Parser), &PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser), module, "AGILeapSecondFilesLoader$Parser", 0);
      }

      void t_AGILeapSecondFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "class_", make_descriptor(AGILeapSecondFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader$Parser::wrap_Object(AGILeapSecondFilesLoader$Parser(((t_AGILeapSecondFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        AGILeapSecondFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = AGILeapSecondFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CompositeFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "java/lang/Number.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CompositeFormat::class$ = NULL;
      jmethodID *CompositeFormat::mids$ = NULL;
      bool CompositeFormat::live$ = false;

      jclass CompositeFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CompositeFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_formatDouble_17acde89c513ee17] = env->getStaticMethodID(cls, "formatDouble", "(DLjava/text/NumberFormat;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDefaultNumberFormat_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_41d4a73d4466d8a8] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_3f781e1d901a0f96] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseFixedstring_04ad666c861ca7c9] = env->getStaticMethodID(cls, "parseFixedstring", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/ParsePosition;)Z");
          mids$[mid_parseNextCharacter_4aabc917f367b3fd] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");
          mids$[mid_parseNumber_7da151659ee8d4e7] = env->getStaticMethodID(cls, "parseNumber", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/ParsePosition;)Ljava/lang/Number;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer CompositeFormat::formatDouble(jdouble a0, const ::java::text::NumberFormat & a1, const ::java::lang::StringBuffer & a2, const ::java::text::FieldPosition & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::StringBuffer(env->callStaticObjectMethod(cls, mids$[mid_formatDouble_17acde89c513ee17], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_d34e2e8dd35583a0]));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_41d4a73d4466d8a8], a0.this$));
      }

      void CompositeFormat::parseAndIgnoreWhitespace(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_parseAndIgnoreWhitespace_3f781e1d901a0f96], a0.this$, a1.this$);
      }

      jboolean CompositeFormat::parseFixedstring(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_parseFixedstring_04ad666c861ca7c9], a0.this$, a1.this$, a2.this$);
      }

      jchar CompositeFormat::parseNextCharacter(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticCharMethod(cls, mids$[mid_parseNextCharacter_4aabc917f367b3fd], a0.this$, a1.this$);
      }

      ::java::lang::Number CompositeFormat::parseNumber(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::Number(env->callStaticObjectMethod(cls, mids$[mid_parseNumber_7da151659ee8d4e7], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data);
      static PyGetSetDef t_CompositeFormat__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeFormat, defaultNumberFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeFormat__methods_[] = {
        DECLARE_METHOD(t_CompositeFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, formatDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, getDefaultNumberFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseAndIgnoreWhitespace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseFixedstring, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNextCharacter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNumber, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeFormat)[] = {
        { Py_tp_methods, t_CompositeFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CompositeFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeFormat, t_CompositeFormat, CompositeFormat);

      void t_CompositeFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeFormat), &PY_TYPE_DEF(CompositeFormat), module, "CompositeFormat", 0);
      }

      void t_CompositeFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "class_", make_descriptor(CompositeFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "wrapfn_", make_descriptor(t_CompositeFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeFormat::initializeClass, 1)))
          return NULL;
        return t_CompositeFormat::wrap_Object(CompositeFormat(((t_CompositeFormat *) arg)->object.this$));
      }
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::lang::StringBuffer a2((jobject) NULL);
        ::java::text::FieldPosition a3((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "Dkkk", ::java::text::NumberFormat::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::formatDouble(a0, a1, a2, a3));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "formatDouble", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::text::NumberFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat());
            return ::java::text::t_NumberFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::text::NumberFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat(a0));
              return ::java::text::t_NumberFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getDefaultNumberFormat", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CompositeFormat::parseAndIgnoreWhitespace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "parseAndIgnoreWhitespace", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "ssk", ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseFixedstring(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "parseFixedstring", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        jchar result;

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNextCharacter(a0, a1));
          return c2p(result);
        }

        PyErr_SetArgsError(type, "parseNextCharacter", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        ::java::lang::Number result((jobject) NULL);

        if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNumber(a0, a1, a2));
          return ::java::lang::t_Number::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseNumber", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefaultNumberFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *AbstractEncounterLOF::class$ = NULL;
        jmethodID *AbstractEncounterLOF::mids$ = NULL;
        bool AbstractEncounterLOF::live$ = false;

        jclass AbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/AbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldOther_b10aa29cc18662da] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_6761e3f334368d44] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_rotationFromInertial_9a23f79cd11b74e7] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_f3b8fc53bbbd7a0a] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::FieldPVCoordinates AbstractEncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_b10aa29cc18662da], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates AbstractEncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_6761e3f334368d44]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation AbstractEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9a23f79cd11b74e7], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation AbstractEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_f3b8fc53bbbd7a0a], a0.this$, a1.this$));
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
        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self);
        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args);
        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_AbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractEncounterLOF, other),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_AbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_AbstractEncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_AbstractEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractEncounterLOF)[] = {
          { Py_tp_methods, t_AbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractEncounterLOF, t_AbstractEncounterLOF, AbstractEncounterLOF);

        void t_AbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractEncounterLOF), &PY_TYPE_DEF(AbstractEncounterLOF), module, "AbstractEncounterLOF", 0);
        }

        void t_AbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "class_", make_descriptor(AbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "wrapfn_", make_descriptor(t_AbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_AbstractEncounterLOF::wrap_Object(AbstractEncounterLOF(((t_AbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args)
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
          }

          PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGibbs.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGibbs::class$ = NULL;
        jmethodID *IodGibbs::mids$ = NULL;
        bool IodGibbs::live$ = false;

        jclass IodGibbs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGibbs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_16ee181d78fe7d37] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_7cf1787d8e8700b6] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_f62c670d850eef41] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGibbs::IodGibbs(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::PV & a1, const ::org::orekit::estimation::measurements::PV & a2, const ::org::orekit::estimation::measurements::PV & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_16ee181d78fe7d37], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::Position & a1, const ::org::orekit::estimation::measurements::Position & a2, const ::org::orekit::estimation::measurements::Position & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_7cf1787d8e8700b6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_f62c670d850eef41], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args);

        static PyMethodDef t_IodGibbs__methods_[] = {
          DECLARE_METHOD(t_IodGibbs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGibbs)[] = {
          { Py_tp_methods, t_IodGibbs__methods_ },
          { Py_tp_init, (void *) t_IodGibbs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGibbs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGibbs, t_IodGibbs, IodGibbs);

        void t_IodGibbs::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGibbs), &PY_TYPE_DEF(IodGibbs), module, "IodGibbs", 0);
        }

        void t_IodGibbs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "class_", make_descriptor(IodGibbs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "wrapfn_", make_descriptor(t_IodGibbs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGibbs::initializeClass, 1)))
            return NULL;
          return t_IodGibbs::wrap_Object(IodGibbs(((t_IodGibbs *) arg)->object.this$));
        }
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGibbs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGibbs object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGibbs(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::PV a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::PV a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_PV::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_PV::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::Position a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::Position a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_Position::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_Position::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataFilter.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataFilter::class$ = NULL;
      jmethodID *DataFilter::mids$ = NULL;
      bool DataFilter::live$ = false;

      jclass DataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_filter_446488bfc679a21b] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::data::DataSource DataFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_446488bfc679a21b], a0.this$));
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
      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg);

      static PyMethodDef t_DataFilter__methods_[] = {
        DECLARE_METHOD(t_DataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataFilter)[] = {
        { Py_tp_methods, t_DataFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataFilter, t_DataFilter, DataFilter);

      void t_DataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(DataFilter), &PY_TYPE_DEF(DataFilter), module, "DataFilter", 0);
      }

      void t_DataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "class_", make_descriptor(DataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "wrapfn_", make_descriptor(t_DataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataFilter::initializeClass, 1)))
          return NULL;
        return t_DataFilter::wrap_Object(DataFilter(((t_DataFilter *) arg)->object.this$));
      }
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizationProblemBuilder::class$ = NULL;
        jmethodID *OptimizationProblemBuilder::mids$ = NULL;
        bool OptimizationProblemBuilder::live$ = false;

        jclass OptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_build_2e2baa3c6f1b9087] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_getDrivers_a6156df500549a58] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
            mids$[mid_getNbParams_f2f64475e4580546] = env->getMethodID(cls, "getNbParams", "()I");
            mids$[mid_getSensors_a6156df500549a58] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
            mids$[mid_getGenerator_4fe5d9b7d76c7ece] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/rugged/utils/DerivativeGenerator;");
            mids$[mid_initMapping_7ae3461a92a43152] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createTargetAndWeight_7ae3461a92a43152] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_getMeasurements_96e33d17abbc900e] = env->getMethodID(cls, "getMeasurements", "()Lorg/orekit/rugged/adjustment/measurements/Observables;");
            mids$[mid_createFunction_b196da25fd980476] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem OptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_2e2baa3c6f1b9087], a0, a1));
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
      namespace adjustment {
        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_OptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_OptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_OptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OptimizationProblemBuilder, t_OptimizationProblemBuilder, OptimizationProblemBuilder);

        void t_OptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizationProblemBuilder), &PY_TYPE_DEF(OptimizationProblemBuilder), module, "OptimizationProblemBuilder", 0);
        }

        void t_OptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "class_", make_descriptor(OptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "wrapfn_", make_descriptor(t_OptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_OptimizationProblemBuilder::wrap_Object(OptimizationProblemBuilder(((t_OptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorConverter::class$ = NULL;
        jmethodID *PropagatorConverter::mids$ = NULL;
        bool PropagatorConverter::live$ = false;

        jclass PropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_b26c78fdb005126c] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_392814b1b1bbdd34] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_979b6b07281c1e27] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_b641a72d0c9694a7] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_b26c78fdb005126c], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_392814b1b1bbdd34], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_979b6b07281c1e27], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_b641a72d0c9694a7], a0.this$, a1, a2, a3.this$));
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
        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args);

        static PyMethodDef t_PropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, convert, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorConverter)[] = {
          { Py_tp_methods, t_PropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorConverter, t_PropagatorConverter, PropagatorConverter);

        void t_PropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorConverter), &PY_TYPE_DEF(PropagatorConverter), module, "PropagatorConverter", 0);
        }

        void t_PropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "class_", make_descriptor(PropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "wrapfn_", make_descriptor(t_PropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PropagatorConverter::wrap_Object(PropagatorConverter(((t_PropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *GlonassUserRangeAccuracy::class$ = NULL;
            jmethodID *GlonassUserRangeAccuracy::mids$ = NULL;
            bool GlonassUserRangeAccuracy::live$ = false;

            jclass GlonassUserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GlonassUserRangeAccuracy::GlonassUserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            jdouble GlonassUserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_456d9a2f64d6b28d]);
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
            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self);
            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data);
            static PyGetSetDef t_GlonassUserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_GlonassUserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GlonassUserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GlonassUserRangeAccuracy)[] = {
              { Py_tp_methods, t_GlonassUserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_GlonassUserRangeAccuracy_init_ },
              { Py_tp_getset, t_GlonassUserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GlonassUserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GlonassUserRangeAccuracy, t_GlonassUserRangeAccuracy, GlonassUserRangeAccuracy);

            void t_GlonassUserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(GlonassUserRangeAccuracy), &PY_TYPE_DEF(GlonassUserRangeAccuracy), module, "GlonassUserRangeAccuracy", 0);
            }

            void t_GlonassUserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "class_", make_descriptor(GlonassUserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "wrapfn_", make_descriptor(t_GlonassUserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_GlonassUserRangeAccuracy::wrap_Object(GlonassUserRangeAccuracy(((t_GlonassUserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              GlonassUserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = GlonassUserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UncorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UncorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *UncorrelatedRandomVectorGenerator::mids$ = NULL;
      bool UncorrelatedRandomVectorGenerator::live$ = false;

      jclass UncorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UncorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a219a228ca4ae65] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_e9e9a0a3450a44f3] = env->getMethodID(cls, "<init>", "([D[DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_nextVector_7cdc325af0834901] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(jint a0, const ::org::hipparchus::random::NormalizedRandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a219a228ca4ae65, a0, a1.this$)) {}

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e9e9a0a3450a44f3, a0.this$, a1.this$, a2.this$)) {}

      JArray< jdouble > UncorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_7cdc325af0834901]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self);

      static PyMethodDef t_UncorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UncorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UncorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UncorrelatedRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UncorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UncorrelatedRandomVectorGenerator, t_UncorrelatedRandomVectorGenerator, UncorrelatedRandomVectorGenerator);

      void t_UncorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UncorrelatedRandomVectorGenerator), &PY_TYPE_DEF(UncorrelatedRandomVectorGenerator), module, "UncorrelatedRandomVectorGenerator", 0);
      }

      void t_UncorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "class_", make_descriptor(UncorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_UncorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UncorrelatedRandomVectorGenerator::wrap_Object(UncorrelatedRandomVectorGenerator(((t_UncorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::NormalizedRandomGenerator a1((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[D[Dk", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1, a2));
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

      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolator::class$ = NULL;
        jmethodID *TricubicInterpolator::mids$ = NULL;
        bool TricubicInterpolator::live$ = false;

        jclass TricubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_64d1837d51e036b5] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/interpolation/TricubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolator::TricubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction TricubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_64d1837d51e036b5], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolator)[] = {
          { Py_tp_methods, t_TricubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolator, t_TricubicInterpolator, TricubicInterpolator);

        void t_TricubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolator), &PY_TYPE_DEF(TricubicInterpolator), module, "TricubicInterpolator", 0);
        }

        void t_TricubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "class_", make_descriptor(TricubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "wrapfn_", make_descriptor(t_TricubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolator::wrap_Object(TricubicInterpolator(((t_TricubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          TricubicInterpolator object((jobject) NULL);

          INT_CALL(object = TricubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::interpolation::t_TricubicInterpolatingFunction::wrap_Object(result);
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
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfSquares::class$ = NULL;
          jmethodID *SumOfSquares::mids$ = NULL;
          bool SumOfSquares::live$ = false;

          jclass SumOfSquares::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfSquares");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_1e0c3014acd35543] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_b883da216b53fdce] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfSquares::SumOfSquares() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void SumOfSquares::aggregate(const SumOfSquares & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_1e0c3014acd35543], a0.this$);
          }

          void SumOfSquares::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          SumOfSquares SumOfSquares::copy() const
          {
            return SumOfSquares(env->callObjectMethod(this$, mids$[mid_copy_b883da216b53fdce]));
          }

          jdouble SumOfSquares::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong SumOfSquares::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble SumOfSquares::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void SumOfSquares::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
        namespace summary {
          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg);
          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data);
          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data);
          static PyGetSetDef t_SumOfSquares__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfSquares, n),
            DECLARE_GET_FIELD(t_SumOfSquares, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfSquares__methods_[] = {
            DECLARE_METHOD(t_SumOfSquares, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfSquares, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfSquares)[] = {
            { Py_tp_methods, t_SumOfSquares__methods_ },
            { Py_tp_init, (void *) t_SumOfSquares_init_ },
            { Py_tp_getset, t_SumOfSquares__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfSquares)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfSquares, t_SumOfSquares, SumOfSquares);

          void t_SumOfSquares::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfSquares), &PY_TYPE_DEF(SumOfSquares), module, "SumOfSquares", 0);
          }

          void t_SumOfSquares::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "class_", make_descriptor(SumOfSquares::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "wrapfn_", make_descriptor(t_SumOfSquares::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfSquares::initializeClass, 1)))
              return NULL;
            return t_SumOfSquares::wrap_Object(SumOfSquares(((t_SumOfSquares *) arg)->object.this$));
          }
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfSquares::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds)
          {
            SumOfSquares object((jobject) NULL);

            INT_CALL(object = SumOfSquares());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg)
          {
            SumOfSquares a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfSquares::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args)
          {
            SumOfSquares result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfSquares::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data)
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
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKCoordinateSystem::class$ = NULL;
        jmethodID *STKEphemerisFile$STKCoordinateSystem::mids$ = NULL;
        bool STKEphemerisFile$STKCoordinateSystem::live$ = false;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::FIXED = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::ICRF = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::INERTIAL = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::J2000 = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE = NULL;

        jclass STKEphemerisFile$STKCoordinateSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_400ba4f1fe184846] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_valueOf_400ba4f1fe184846] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_values_fc3899728934e9b0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FIXED = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "FIXED", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            ICRF = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            INERTIAL = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "INERTIAL", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            J2000 = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            MEAN_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "MEAN_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TEME_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TEME_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TRUE_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TRUE_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_400ba4f1fe184846], a0.this$));
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_400ba4f1fe184846], a0.this$));
        }

        JArray< STKEphemerisFile$STKCoordinateSystem > STKEphemerisFile$STKCoordinateSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< STKEphemerisFile$STKCoordinateSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_fc3899728934e9b0]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKCoordinateSystem__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKCoordinateSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKCoordinateSystem__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKCoordinateSystem)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKCoordinateSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_STKEphemerisFile$STKCoordinateSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKCoordinateSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKCoordinateSystem, t_STKEphemerisFile$STKCoordinateSystem, STKEphemerisFile$STKCoordinateSystem);
        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(const STKEphemerisFile$STKCoordinateSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_STKEphemerisFile$STKCoordinateSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKCoordinateSystem), &PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem), module, "STKEphemerisFile$STKCoordinateSystem", 0);
        }

        void t_STKEphemerisFile$STKCoordinateSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "class_", make_descriptor(STKEphemerisFile$STKCoordinateSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(STKEphemerisFile$STKCoordinateSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "FIXED", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "ICRF", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::ICRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "INERTIAL", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::INERTIAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "J2000", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::J2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "MEAN_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TEME_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TRUE_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE)));
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(STKEphemerisFile$STKCoordinateSystem(((t_STKEphemerisFile$STKCoordinateSystem *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::parse(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::valueOf(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type)
        {
          JArray< STKEphemerisFile$STKCoordinateSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::values());
          return JArray<jobject>(result.this$).wrap(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject);
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *Month::class$ = NULL;
      jmethodID *Month::mids$ = NULL;
      bool Month::live$ = false;
      Month *Month::APRIL = NULL;
      Month *Month::AUGUST = NULL;
      Month *Month::DECEMBER = NULL;
      Month *Month::FEBRUARY = NULL;
      Month *Month::JANUARY = NULL;
      Month *Month::JULY = NULL;
      Month *Month::JUNE = NULL;
      Month *Month::MARCH = NULL;
      Month *Month::MAY = NULL;
      Month *Month::NOVEMBER = NULL;
      Month *Month::OCTOBER = NULL;
      Month *Month::SEPTEMBER = NULL;

      jclass Month::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/Month");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCapitalizedAbbreviation_0090f7797e403f43] = env->getMethodID(cls, "getCapitalizedAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getCapitalizedName_0090f7797e403f43] = env->getMethodID(cls, "getCapitalizedName", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseAbbreviation_0090f7797e403f43] = env->getMethodID(cls, "getLowerCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseName_0090f7797e403f43] = env->getMethodID(cls, "getLowerCaseName", "()Ljava/lang/String;");
          mids$[mid_getMonth_34384ab76eaa4039] = env->getStaticMethodID(cls, "getMonth", "(I)Lorg/orekit/time/Month;");
          mids$[mid_getNumber_f2f64475e4580546] = env->getMethodID(cls, "getNumber", "()I");
          mids$[mid_getUpperCaseAbbreviation_0090f7797e403f43] = env->getMethodID(cls, "getUpperCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getUpperCaseName_0090f7797e403f43] = env->getMethodID(cls, "getUpperCaseName", "()Ljava/lang/String;");
          mids$[mid_parseMonth_1584a7c8cadb0a74] = env->getStaticMethodID(cls, "parseMonth", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_valueOf_1584a7c8cadb0a74] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_values_d37438cd70235f65] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/time/Month;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          APRIL = new Month(env->getStaticObjectField(cls, "APRIL", "Lorg/orekit/time/Month;"));
          AUGUST = new Month(env->getStaticObjectField(cls, "AUGUST", "Lorg/orekit/time/Month;"));
          DECEMBER = new Month(env->getStaticObjectField(cls, "DECEMBER", "Lorg/orekit/time/Month;"));
          FEBRUARY = new Month(env->getStaticObjectField(cls, "FEBRUARY", "Lorg/orekit/time/Month;"));
          JANUARY = new Month(env->getStaticObjectField(cls, "JANUARY", "Lorg/orekit/time/Month;"));
          JULY = new Month(env->getStaticObjectField(cls, "JULY", "Lorg/orekit/time/Month;"));
          JUNE = new Month(env->getStaticObjectField(cls, "JUNE", "Lorg/orekit/time/Month;"));
          MARCH = new Month(env->getStaticObjectField(cls, "MARCH", "Lorg/orekit/time/Month;"));
          MAY = new Month(env->getStaticObjectField(cls, "MAY", "Lorg/orekit/time/Month;"));
          NOVEMBER = new Month(env->getStaticObjectField(cls, "NOVEMBER", "Lorg/orekit/time/Month;"));
          OCTOBER = new Month(env->getStaticObjectField(cls, "OCTOBER", "Lorg/orekit/time/Month;"));
          SEPTEMBER = new Month(env->getStaticObjectField(cls, "SEPTEMBER", "Lorg/orekit/time/Month;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Month::getCapitalizedAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedAbbreviation_0090f7797e403f43]));
      }

      ::java::lang::String Month::getCapitalizedName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedName_0090f7797e403f43]));
      }

      ::java::lang::String Month::getLowerCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseAbbreviation_0090f7797e403f43]));
      }

      ::java::lang::String Month::getLowerCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseName_0090f7797e403f43]));
      }

      Month Month::getMonth(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_getMonth_34384ab76eaa4039], a0));
      }

      jint Month::getNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumber_f2f64475e4580546]);
      }

      ::java::lang::String Month::getUpperCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseAbbreviation_0090f7797e403f43]));
      }

      ::java::lang::String Month::getUpperCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseName_0090f7797e403f43]));
      }

      Month Month::parseMonth(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_parseMonth_1584a7c8cadb0a74], a0.this$));
      }

      Month Month::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1584a7c8cadb0a74], a0.this$));
      }

      JArray< Month > Month::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Month >(env->callStaticObjectMethod(cls, mids$[mid_values_d37438cd70235f65]));
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
      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_of_(t_Month *self, PyObject *args);
      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self);
      static PyObject *t_Month_getCapitalizedName(t_Month *self);
      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getLowerCaseName(t_Month *self);
      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_getNumber(t_Month *self);
      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getUpperCaseName(t_Month *self);
      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Month_values(PyTypeObject *type);
      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__number(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data);
      static PyGetSetDef t_Month__fields_[] = {
        DECLARE_GET_FIELD(t_Month, capitalizedAbbreviation),
        DECLARE_GET_FIELD(t_Month, capitalizedName),
        DECLARE_GET_FIELD(t_Month, lowerCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, lowerCaseName),
        DECLARE_GET_FIELD(t_Month, number),
        DECLARE_GET_FIELD(t_Month, upperCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, upperCaseName),
        DECLARE_GET_FIELD(t_Month, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Month__methods_[] = {
        DECLARE_METHOD(t_Month, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, of_, METH_VARARGS),
        DECLARE_METHOD(t_Month, getCapitalizedAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getCapitalizedName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, getNumber, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, parseMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Month, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Month)[] = {
        { Py_tp_methods, t_Month__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Month__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Month)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Month, t_Month, Month);
      PyObject *t_Month::wrap_Object(const Month& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Month::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Month::install(PyObject *module)
      {
        installType(&PY_TYPE(Month), &PY_TYPE_DEF(Month), module, "Month", 0);
      }

      void t_Month::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "class_", make_descriptor(Month::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "wrapfn_", make_descriptor(t_Month::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "boxfn_", make_descriptor(boxObject));
        env->getClass(Month::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "APRIL", make_descriptor(t_Month::wrap_Object(*Month::APRIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "AUGUST", make_descriptor(t_Month::wrap_Object(*Month::AUGUST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "DECEMBER", make_descriptor(t_Month::wrap_Object(*Month::DECEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "FEBRUARY", make_descriptor(t_Month::wrap_Object(*Month::FEBRUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JANUARY", make_descriptor(t_Month::wrap_Object(*Month::JANUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JULY", make_descriptor(t_Month::wrap_Object(*Month::JULY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JUNE", make_descriptor(t_Month::wrap_Object(*Month::JUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MARCH", make_descriptor(t_Month::wrap_Object(*Month::MARCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MAY", make_descriptor(t_Month::wrap_Object(*Month::MAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "NOVEMBER", make_descriptor(t_Month::wrap_Object(*Month::NOVEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "OCTOBER", make_descriptor(t_Month::wrap_Object(*Month::OCTOBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "SEPTEMBER", make_descriptor(t_Month::wrap_Object(*Month::SEPTEMBER)));
      }

      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Month::initializeClass, 1)))
          return NULL;
        return t_Month::wrap_Object(Month(((t_Month *) arg)->object.this$));
      }
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Month::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Month_of_(t_Month *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getCapitalizedName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedName());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        Month result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::getMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_getNumber(t_Month *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getUpperCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::parseMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::valueOf(a0));
          return t_Month::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Month_values(PyTypeObject *type)
      {
        JArray< Month > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::Month::values());
        return JArray<jobject>(result.this$).wrap(t_Month::wrap_jobject);
      }
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedName());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseName());
        return j2p(value);
      }

      static PyObject *t_Month_get__number(t_Month *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseName());
        return j2p(value);
      }
    }
  }
}
